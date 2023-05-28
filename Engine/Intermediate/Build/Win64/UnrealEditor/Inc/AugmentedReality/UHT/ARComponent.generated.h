// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;
enum class EARObjectClassification : uint8; struct FLinearColor;
enum class EFaceComponentDebugMode : uint8;
enum class EGeoAnchorComponentDebugMode : uint8;
enum class EImageComponentDebugMode : uint8;
enum class EPlaneComponentDebugMode : uint8;
enum class EPoseComponentDebugMode : uint8;
enum class EQRCodeComponentDebugMode : uint8;
struct FAREnvironmentProbeUpdatePayload;
struct FARFaceUpdatePayload;
struct FARGeoAnchorUpdatePayload;
struct FARImageUpdatePayload;
struct FARMeshUpdatePayload;
struct FARObjectUpdatePayload;
struct FARPlaneUpdatePayload;
struct FARPointUpdatePayload;
struct FARPoseUpdatePayload;
struct FARQRCodeUpdatePayload;
struct FGuid;
#ifdef AUGMENTEDREALITY_ARComponent_generated_h
#error "ARComponent.generated.h already included, missing '#pragma once' in ARComponent.h"
#endif
#define AUGMENTEDREALITY_ARComponent_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSessionPayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSessionPayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPlaneUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPointUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARFaceUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARImageUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARQRCodeUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPoseUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FAREnvironmentProbeUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARObjectUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARMeshUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARGeoAnchorUpdatePayload>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_RPC_WRAPPERS \
	virtual void UpdateVisualization_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_Payload); \
	DECLARE_FUNCTION(execUpdateVisualization); \
	DECLARE_FUNCTION(execGetMRMesh); \
	DECLARE_FUNCTION(execSetNativeID);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateVisualization_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_Payload); \
	DECLARE_FUNCTION(execUpdateVisualization); \
	DECLARE_FUNCTION(execGetMRMesh); \
	DECLARE_FUNCTION(execSetNativeID);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARComponent(); \
	friend struct Z_Construct_UClass_UARComponent_Statics; \
public: \
	DECLARE_CLASS(UARComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NativeID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NativeID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_INCLASS \
private: \
	static void StaticRegisterNativesUARComponent(); \
	friend struct Z_Construct_UClass_UARComponent_Statics; \
public: \
	DECLARE_CLASS(UARComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NativeID=NETFIELD_REP_START, \
		NETFIELD_REP_END=NativeID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARComponent(UARComponent&&); \
	NO_API UARComponent(const UARComponent&); \
public: \
	NO_API virtual ~UARComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARComponent(UARComponent&&); \
	NO_API UARComponent(const UARComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UARComponent) \
	NO_API virtual ~UARComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_230_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_233_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPlaneUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPlaneUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execGetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetPlaneComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPlaneUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPlaneUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execGetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetObjectClassificationDebugColors); \
	DECLARE_FUNCTION(execSetPlaneComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneComponent(); \
	friend struct Z_Construct_UClass_UARPlaneComponent_Statics; \
public: \
	DECLARE_CLASS(UARPlaneComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_INCLASS \
private: \
	static void StaticRegisterNativesUARPlaneComponent(); \
	friend struct Z_Construct_UClass_UARPlaneComponent_Statics; \
public: \
	DECLARE_CLASS(UARPlaneComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPlaneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneComponent(UARPlaneComponent&&); \
	NO_API UARPlaneComponent(const UARPlaneComponent&); \
public: \
	NO_API virtual ~UARPlaneComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneComponent(UARPlaneComponent&&); \
	NO_API UARPlaneComponent(const UARPlaneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneComponent) \
	NO_API virtual ~UARPlaneComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_324_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPlaneComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPointUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPointUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPointUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPointUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPointComponent(); \
	friend struct Z_Construct_UClass_UARPointComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_INCLASS \
private: \
	static void StaticRegisterNativesUARPointComponent(); \
	friend struct Z_Construct_UClass_UARPointComponent_Statics; \
public: \
	DECLARE_CLASS(UARPointComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPointComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPointComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointComponent(UARPointComponent&&); \
	NO_API UARPointComponent(const UARPointComponent&); \
public: \
	NO_API virtual ~UARPointComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPointComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPointComponent(UARPointComponent&&); \
	NO_API UARPointComponent(const UARPointComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPointComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPointComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPointComponent) \
	NO_API virtual ~UARPointComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_365_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_368_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPointComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARFaceUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARFaceUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetFaceComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARFaceUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARFaceUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetFaceComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceComponent(); \
	friend struct Z_Construct_UClass_UARFaceComponent_Statics; \
public: \
	DECLARE_CLASS(UARFaceComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_INCLASS \
private: \
	static void StaticRegisterNativesUARFaceComponent(); \
	friend struct Z_Construct_UClass_UARFaceComponent_Statics; \
public: \
	DECLARE_CLASS(UARFaceComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARFaceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceComponent(UARFaceComponent&&); \
	NO_API UARFaceComponent(const UARFaceComponent&); \
public: \
	NO_API virtual ~UARFaceComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceComponent(UARFaceComponent&&); \
	NO_API UARFaceComponent(const UARFaceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceComponent) \
	NO_API virtual ~UARFaceComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_420_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARFaceComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARImageUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARImageUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetImageComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARImageUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARImageUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetImageComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARImageComponent(); \
	friend struct Z_Construct_UClass_UARImageComponent_Statics; \
public: \
	DECLARE_CLASS(UARImageComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARImageComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_INCLASS \
private: \
	static void StaticRegisterNativesUARImageComponent(); \
	friend struct Z_Construct_UClass_UARImageComponent_Statics; \
public: \
	DECLARE_CLASS(UARImageComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARImageComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARImageComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARImageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARImageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARImageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARImageComponent(UARImageComponent&&); \
	NO_API UARImageComponent(const UARImageComponent&); \
public: \
	NO_API virtual ~UARImageComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARImageComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARImageComponent(UARImageComponent&&); \
	NO_API UARImageComponent(const UARImageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARImageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARImageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARImageComponent) \
	NO_API virtual ~UARImageComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_482_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_485_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARImageComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARQRCodeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARQRCodeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetQRCodeComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARQRCodeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARQRCodeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetQRCodeComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARQRCodeComponent(); \
	friend struct Z_Construct_UClass_UARQRCodeComponent_Statics; \
public: \
	DECLARE_CLASS(UARQRCodeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARQRCodeComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_INCLASS \
private: \
	static void StaticRegisterNativesUARQRCodeComponent(); \
	friend struct Z_Construct_UClass_UARQRCodeComponent_Statics; \
public: \
	DECLARE_CLASS(UARQRCodeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARQRCodeComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARQRCodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARQRCodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARQRCodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARQRCodeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARQRCodeComponent(UARQRCodeComponent&&); \
	NO_API UARQRCodeComponent(const UARQRCodeComponent&); \
public: \
	NO_API virtual ~UARQRCodeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARQRCodeComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARQRCodeComponent(UARQRCodeComponent&&); \
	NO_API UARQRCodeComponent(const UARQRCodeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARQRCodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARQRCodeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARQRCodeComponent) \
	NO_API virtual ~UARQRCodeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_526_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_529_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARQRCodeComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARPoseUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPoseUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetPoseComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARPoseUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARPoseUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetPoseComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPoseComponent(); \
	friend struct Z_Construct_UClass_UARPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UARPoseComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPoseComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_INCLASS \
private: \
	static void StaticRegisterNativesUARPoseComponent(); \
	friend struct Z_Construct_UClass_UARPoseComponent_Statics; \
public: \
	DECLARE_CLASS(UARPoseComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPoseComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPoseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPoseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPoseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPoseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPoseComponent(UARPoseComponent&&); \
	NO_API UARPoseComponent(const UARPoseComponent&); \
public: \
	NO_API virtual ~UARPoseComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPoseComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPoseComponent(UARPoseComponent&&); \
	NO_API UARPoseComponent(const UARPoseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPoseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPoseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPoseComponent) \
	NO_API virtual ~UARPoseComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_570_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_573_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPoseComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FAREnvironmentProbeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FAREnvironmentProbeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FAREnvironmentProbeUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FAREnvironmentProbeUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentProbeComponent(); \
	friend struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentProbeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentProbeComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_INCLASS \
private: \
	static void StaticRegisterNativesUAREnvironmentProbeComponent(); \
	friend struct Z_Construct_UClass_UAREnvironmentProbeComponent_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentProbeComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentProbeComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentProbeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAREnvironmentProbeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentProbeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentProbeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentProbeComponent(UAREnvironmentProbeComponent&&); \
	NO_API UAREnvironmentProbeComponent(const UAREnvironmentProbeComponent&); \
public: \
	NO_API virtual ~UAREnvironmentProbeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentProbeComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentProbeComponent(UAREnvironmentProbeComponent&&); \
	NO_API UAREnvironmentProbeComponent(const UAREnvironmentProbeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentProbeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentProbeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentProbeComponent) \
	NO_API virtual ~UAREnvironmentProbeComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_604_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_607_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UAREnvironmentProbeComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARObjectUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARObjectUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARObjectUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARObjectUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARObjectComponent(); \
	friend struct Z_Construct_UClass_UARObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UARObjectComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARObjectComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_INCLASS \
private: \
	static void StaticRegisterNativesUARObjectComponent(); \
	friend struct Z_Construct_UClass_UARObjectComponent_Statics; \
public: \
	DECLARE_CLASS(UARObjectComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARObjectComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARObjectComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARObjectComponent(UARObjectComponent&&); \
	NO_API UARObjectComponent(const UARObjectComponent&); \
public: \
	NO_API virtual ~UARObjectComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARObjectComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARObjectComponent(UARObjectComponent&&); \
	NO_API UARObjectComponent(const UARObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARObjectComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARObjectComponent) \
	NO_API virtual ~UARObjectComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_631_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_634_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARObjectComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARMeshUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARMeshUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARMeshUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARMeshUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARMeshComponent(); \
	friend struct Z_Construct_UClass_UARMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UARMeshComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_INCLASS \
private: \
	static void StaticRegisterNativesUARMeshComponent(); \
	friend struct Z_Construct_UClass_UARMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UARMeshComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshComponent(UARMeshComponent&&); \
	NO_API UARMeshComponent(const UARMeshComponent&); \
public: \
	NO_API virtual ~UARMeshComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARMeshComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARMeshComponent(UARMeshComponent&&); \
	NO_API UARMeshComponent(const UARMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARMeshComponent) \
	NO_API virtual ~UARMeshComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_658_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_661_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARMeshComponent>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_RPC_WRAPPERS \
	virtual bool ServerUpdatePayload_Validate(FARGeoAnchorUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARGeoAnchorUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetGeoAnchorComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdatePayload_Validate(FARGeoAnchorUpdatePayload const& ); \
	virtual void ServerUpdatePayload_Implementation(FARGeoAnchorUpdatePayload const& NewPayload); \
 \
	DECLARE_FUNCTION(execServerUpdatePayload); \
	DECLARE_FUNCTION(execSetGeoAnchorComponentDebugMode);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGeoAnchorComponent(); \
	friend struct Z_Construct_UClass_UARGeoAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchorComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchorComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_INCLASS \
private: \
	static void StaticRegisterNativesUARGeoAnchorComponent(); \
	friend struct Z_Construct_UClass_UARGeoAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UARGeoAnchorComponent, UARComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGeoAnchorComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedPayload=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedPayload	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGeoAnchorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchorComponent(UARGeoAnchorComponent&&); \
	NO_API UARGeoAnchorComponent(const UARGeoAnchorComponent&); \
public: \
	NO_API virtual ~UARGeoAnchorComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGeoAnchorComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGeoAnchorComponent(UARGeoAnchorComponent&&); \
	NO_API UARGeoAnchorComponent(const UARGeoAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGeoAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGeoAnchorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARGeoAnchorComponent) \
	NO_API virtual ~UARGeoAnchorComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_696_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h_699_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGeoAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h


#define FOREACH_ENUM_EARSESSIONCONFIGFLAGS(op) \
	op(EARSessionConfigFlags::None) \
	op(EARSessionConfigFlags::GenerateMeshData) \
	op(EARSessionConfigFlags::RenderMeshDataInWireframe) \
	op(EARSessionConfigFlags::GenerateCollisionForMeshData) \
	op(EARSessionConfigFlags::GenerateNavMeshForMeshData) \
	op(EARSessionConfigFlags::UseMeshDataForOcclusion) 

enum class EARSessionConfigFlags : uint8;
template<> struct TIsUEnumClass<EARSessionConfigFlags> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionConfigFlags>();

#define FOREACH_ENUM_EPLANECOMPONENTDEBUGMODE(op) \
	op(EPlaneComponentDebugMode::None) \
	op(EPlaneComponentDebugMode::ShowNetworkRole) \
	op(EPlaneComponentDebugMode::ShowClassification) 

enum class EPlaneComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EPlaneComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPlaneComponentDebugMode>();

#define FOREACH_ENUM_EFACECOMPONENTDEBUGMODE(op) \
	op(EFaceComponentDebugMode::None) \
	op(EFaceComponentDebugMode::ShowEyeVectors) \
	op(EFaceComponentDebugMode::ShowFaceMesh) 

enum class EFaceComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EFaceComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EFaceComponentDebugMode>();

#define FOREACH_ENUM_EARFACETRANSFORMMIXING(op) \
	op(EARFaceTransformMixing::ComponentOnly) \
	op(EARFaceTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceTransformMixing::ComponentWithTracked) \
	op(EARFaceTransformMixing::TrackingOnly) 

enum class EARFaceTransformMixing : uint8;
template<> struct TIsUEnumClass<EARFaceTransformMixing> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTransformMixing>();

#define FOREACH_ENUM_EIMAGECOMPONENTDEBUGMODE(op) \
	op(EImageComponentDebugMode::None) \
	op(EImageComponentDebugMode::ShowDetectedImage) 

enum class EImageComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EImageComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EImageComponentDebugMode>();

#define FOREACH_ENUM_EQRCODECOMPONENTDEBUGMODE(op) \
	op(EQRCodeComponentDebugMode::None) \
	op(EQRCodeComponentDebugMode::ShowQRCode) 

enum class EQRCodeComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EQRCodeComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EQRCodeComponentDebugMode>();

#define FOREACH_ENUM_EPOSECOMPONENTDEBUGMODE(op) \
	op(EPoseComponentDebugMode::None) \
	op(EPoseComponentDebugMode::ShowSkeleton) 

enum class EPoseComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EPoseComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EPoseComponentDebugMode>();

#define FOREACH_ENUM_EGEOANCHORCOMPONENTDEBUGMODE(op) \
	op(EGeoAnchorComponentDebugMode::None) \
	op(EGeoAnchorComponentDebugMode::ShowGeoData) 

enum class EGeoAnchorComponentDebugMode : uint8;
template<> struct TIsUEnumClass<EGeoAnchorComponentDebugMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EGeoAnchorComponentDebugMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
