// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoInterfaces.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h
#error "GizmoInterfaces.generated.h already included, missing '#pragma once' in GizmoInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoTransformSource(UGizmoTransformSource&&); \
	NO_API UGizmoTransformSource(const UGizmoTransformSource&); \
public: \
	NO_API virtual ~UGizmoTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoTransformSource(UGizmoTransformSource&&); \
	NO_API UGizmoTransformSource(const UGizmoTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoTransformSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformSource) \
	NO_API virtual ~UGizmoTransformSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoTransformSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoTransformSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoTransformSource() {} \
public: \
	typedef UGizmoTransformSource UClassType; \
	typedef IGizmoTransformSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoTransformSource() {} \
public: \
	typedef UGizmoTransformSource UClassType; \
	typedef IGizmoTransformSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_28_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoTransformSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTangentVectors); \
	DECLARE_FUNCTION(execHasTangentVectors); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetOrigin);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTangentVectors); \
	DECLARE_FUNCTION(execHasTangentVectors); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetOrigin);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoAxisSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoAxisSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoAxisSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoAxisSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoAxisSource(UGizmoAxisSource&&); \
	NO_API UGizmoAxisSource(const UGizmoAxisSource&); \
public: \
	NO_API virtual ~UGizmoAxisSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoAxisSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoAxisSource(UGizmoAxisSource&&); \
	NO_API UGizmoAxisSource(const UGizmoAxisSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoAxisSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoAxisSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoAxisSource) \
	NO_API virtual ~UGizmoAxisSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoAxisSource(); \
	friend struct Z_Construct_UClass_UGizmoAxisSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoAxisSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoAxisSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoAxisSource() {} \
public: \
	typedef UGizmoAxisSource UClassType; \
	typedef IGizmoAxisSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoAxisSource() {} \
public: \
	typedef UGizmoAxisSource UClassType; \
	typedef IGizmoAxisSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_51_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoAxisSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickTarget(UGizmoClickTarget&&); \
	NO_API UGizmoClickTarget(const UGizmoClickTarget&); \
public: \
	NO_API virtual ~UGizmoClickTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickTarget(UGizmoClickTarget&&); \
	NO_API UGizmoClickTarget(const UGizmoClickTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickTarget) \
	NO_API virtual ~UGizmoClickTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoClickTarget(); \
	friend struct Z_Construct_UClass_UGizmoClickTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoClickTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoClickTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoClickTarget() {} \
public: \
	typedef UGizmoClickTarget UClassType; \
	typedef IGizmoClickTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoClickTarget() {} \
public: \
	typedef UGizmoClickTarget UClassType; \
	typedef IGizmoClickTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_99_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_102_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoClickTarget>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHittableState); \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHittableState); \
	DECLARE_FUNCTION(execUpdateInteractingState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickMultiTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickMultiTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickMultiTarget(UGizmoClickMultiTarget&&); \
	NO_API UGizmoClickMultiTarget(const UGizmoClickMultiTarget&); \
public: \
	NO_API virtual ~UGizmoClickMultiTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickMultiTarget(UGizmoClickMultiTarget&&); \
	NO_API UGizmoClickMultiTarget(const UGizmoClickMultiTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickMultiTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickMultiTarget) \
	NO_API virtual ~UGizmoClickMultiTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoClickMultiTarget(); \
	friend struct Z_Construct_UClass_UGizmoClickMultiTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoClickMultiTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoClickMultiTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoClickMultiTarget() {} \
public: \
	typedef UGizmoClickMultiTarget UClassType; \
	typedef IGizmoClickMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoClickMultiTarget() {} \
public: \
	typedef UGizmoClickMultiTarget UClassType; \
	typedef IGizmoClickMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_132_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_135_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoClickMultiTarget>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoRenderTarget(UGizmoRenderTarget&&); \
	NO_API UGizmoRenderTarget(const UGizmoRenderTarget&); \
public: \
	NO_API virtual ~UGizmoRenderTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoRenderTarget(UGizmoRenderTarget&&); \
	NO_API UGizmoRenderTarget(const UGizmoRenderTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderTarget) \
	NO_API virtual ~UGizmoRenderTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoRenderTarget(); \
	friend struct Z_Construct_UClass_UGizmoRenderTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoRenderTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoRenderTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoRenderTarget() {} \
public: \
	typedef UGizmoRenderTarget UClassType; \
	typedef IGizmoRenderTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoRenderTarget() {} \
public: \
	typedef UGizmoRenderTarget UClassType; \
	typedef IGizmoRenderTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_182_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoRenderTarget>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateVisibilityState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateVisibilityState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoRenderMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderMultiTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoRenderMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderMultiTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoRenderMultiTarget(UGizmoRenderMultiTarget&&); \
	NO_API UGizmoRenderMultiTarget(const UGizmoRenderMultiTarget&); \
public: \
	NO_API virtual ~UGizmoRenderMultiTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoRenderMultiTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoRenderMultiTarget(UGizmoRenderMultiTarget&&); \
	NO_API UGizmoRenderMultiTarget(const UGizmoRenderMultiTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoRenderMultiTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoRenderMultiTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoRenderMultiTarget) \
	NO_API virtual ~UGizmoRenderMultiTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoRenderMultiTarget(); \
	friend struct Z_Construct_UClass_UGizmoRenderMultiTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoRenderMultiTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoRenderMultiTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoRenderMultiTarget() {} \
public: \
	typedef UGizmoRenderMultiTarget UClassType; \
	typedef IGizmoRenderMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoRenderMultiTarget() {} \
public: \
	typedef UGizmoRenderMultiTarget UClassType; \
	typedef IGizmoRenderMultiTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_204_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_207_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoRenderMultiTarget>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndUpdate); \
	DECLARE_FUNCTION(execBeginUpdate);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndUpdate); \
	DECLARE_FUNCTION(execBeginUpdate);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoStateTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoStateTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoStateTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoStateTarget(UGizmoStateTarget&&); \
	NO_API UGizmoStateTarget(const UGizmoStateTarget&); \
public: \
	NO_API virtual ~UGizmoStateTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoStateTarget(UGizmoStateTarget&&); \
	NO_API UGizmoStateTarget(const UGizmoStateTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoStateTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoStateTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoStateTarget) \
	NO_API virtual ~UGizmoStateTarget();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoStateTarget(); \
	friend struct Z_Construct_UClass_UGizmoStateTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoStateTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoStateTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoStateTarget() {} \
public: \
	typedef UGizmoStateTarget UClassType; \
	typedef IGizmoStateTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoStateTarget() {} \
public: \
	typedef UGizmoStateTarget UClassType; \
	typedef IGizmoStateTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_236_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_239_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoStateTarget>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoFloatParameterSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoFloatParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoFloatParameterSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoFloatParameterSource(UGizmoFloatParameterSource&&); \
	NO_API UGizmoFloatParameterSource(const UGizmoFloatParameterSource&); \
public: \
	NO_API virtual ~UGizmoFloatParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoFloatParameterSource(UGizmoFloatParameterSource&&); \
	NO_API UGizmoFloatParameterSource(const UGizmoFloatParameterSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoFloatParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoFloatParameterSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoFloatParameterSource) \
	NO_API virtual ~UGizmoFloatParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoFloatParameterSource(); \
	friend struct Z_Construct_UClass_UGizmoFloatParameterSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoFloatParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoFloatParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoFloatParameterSource() {} \
public: \
	typedef UGizmoFloatParameterSource UClassType; \
	typedef IGizmoFloatParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoFloatParameterSource() {} \
public: \
	typedef UGizmoFloatParameterSource UClassType; \
	typedef IGizmoFloatParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_265_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_268_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoFloatParameterSource>();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoVec2ParameterSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoVec2ParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoVec2ParameterSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoVec2ParameterSource(UGizmoVec2ParameterSource&&); \
	NO_API UGizmoVec2ParameterSource(const UGizmoVec2ParameterSource&); \
public: \
	NO_API virtual ~UGizmoVec2ParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoVec2ParameterSource(UGizmoVec2ParameterSource&&); \
	NO_API UGizmoVec2ParameterSource(const UGizmoVec2ParameterSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoVec2ParameterSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoVec2ParameterSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoVec2ParameterSource) \
	NO_API virtual ~UGizmoVec2ParameterSource();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoVec2ParameterSource(); \
	friend struct Z_Construct_UClass_UGizmoVec2ParameterSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoVec2ParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoVec2ParameterSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoVec2ParameterSource() {} \
public: \
	typedef UGizmoVec2ParameterSource UClassType; \
	typedef IGizmoVec2ParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoVec2ParameterSource() {} \
public: \
	typedef UGizmoVec2ParameterSource UClassType; \
	typedef IGizmoVec2ParameterSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_298_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_301_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoVec2ParameterSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
