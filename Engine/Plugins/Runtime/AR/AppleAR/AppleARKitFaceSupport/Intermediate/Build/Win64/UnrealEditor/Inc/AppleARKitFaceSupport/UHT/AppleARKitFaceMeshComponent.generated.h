// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleARKitFaceMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARFaceBlendShape : uint8;
enum class EARFaceBlendShape : uint8; 
struct FNetQuantizeFaceCurve;
#ifdef APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h
#error "AppleARKitFaceMeshComponent.generated.h already included, missing '#pragma once' in AppleARKitFaceMeshComponent.h"
#endif
#define APPLEARKITFACESUPPORT_AppleARKitFaceMeshComponent_generated_h

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetQuantizeFaceCurve_Statics; \
	APPLEARKITFACESUPPORT_API static class UScriptStruct* StaticStruct();


template<> APPLEARKITFACESUPPORT_API UScriptStruct* StaticStruct<struct FNetQuantizeFaceCurve>();

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS \
	virtual bool ServerUpdateFaceCurves_Validate(TArray<FNetQuantizeFaceCurve> const& ); \
	virtual void ServerUpdateFaceCurves_Implementation(TArray<FNetQuantizeFaceCurve> const& ClientCurves); \
 \
	DECLARE_FUNCTION(execServerUpdateFaceCurves); \
	DECLARE_FUNCTION(execOnRep_RemoteCurves); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execPublishViaLiveLink); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execSetAutoBind); \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execUpdateMeshFromBlendShapes); \
	DECLARE_FUNCTION(execGetFaceBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapes); \
	DECLARE_FUNCTION(execCreateMesh);


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateFaceCurves_Validate(TArray<FNetQuantizeFaceCurve> const& ); \
	virtual void ServerUpdateFaceCurves_Implementation(TArray<FNetQuantizeFaceCurve> const& ClientCurves); \
 \
	DECLARE_FUNCTION(execServerUpdateFaceCurves); \
	DECLARE_FUNCTION(execOnRep_RemoteCurves); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execPublishViaLiveLink); \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp); \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber); \
	DECLARE_FUNCTION(execSetAutoBind); \
	DECLARE_FUNCTION(execUpdateMesh); \
	DECLARE_FUNCTION(execUpdateMeshFromBlendShapes); \
	DECLARE_FUNCTION(execGetFaceBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapeAmount); \
	DECLARE_FUNCTION(execSetBlendShapes); \
	DECLARE_FUNCTION(execCreateMesh);


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitFaceMeshComponent(); \
	friend struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitFaceMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKitFaceSupport"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitFaceMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteCurves=NETFIELD_REP_START, \
		NETFIELD_REP_END=RemoteCurves	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUAppleARKitFaceMeshComponent(); \
	friend struct Z_Construct_UClass_UAppleARKitFaceMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UAppleARKitFaceMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKitFaceSupport"), NO_API) \
	DECLARE_SERIALIZER(UAppleARKitFaceMeshComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteCurves=NETFIELD_REP_START, \
		NETFIELD_REP_END=RemoteCurves	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitFaceMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitFaceMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitFaceMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitFaceMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent&&); \
	NO_API UAppleARKitFaceMeshComponent(const UAppleARKitFaceMeshComponent&); \
public: \
	NO_API virtual ~UAppleARKitFaceMeshComponent();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppleARKitFaceMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAppleARKitFaceMeshComponent(UAppleARKitFaceMeshComponent&&); \
	NO_API UAppleARKitFaceMeshComponent(const UAppleARKitFaceMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitFaceMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitFaceMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleARKitFaceMeshComponent) \
	NO_API virtual ~UAppleARKitFaceMeshComponent();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_115_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h_119_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AppleARKitFaceMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APPLEARKITFACESUPPORT_API UClass* StaticClass<class UAppleARKitFaceMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKitFaceSupport_Source_AppleARKitFaceSupport_Public_AppleARKitFaceMeshComponent_h


#define FOREACH_ENUM_EARFACECOMPONENTTRANSFORMMIXING(op) \
	op(EARFaceComponentTransformMixing::ComponentOnly) \
	op(EARFaceComponentTransformMixing::ComponentLocationTrackedRotation) \
	op(EARFaceComponentTransformMixing::ComponentWithTracked) \
	op(EARFaceComponentTransformMixing::TrackingOnly) 

enum class EARFaceComponentTransformMixing : uint8;
template<> struct TIsUEnumClass<EARFaceComponentTransformMixing> { enum { Value = true }; };
template<> APPLEARKITFACESUPPORT_API UEnum* StaticEnum<EARFaceComponentTransformMixing>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
