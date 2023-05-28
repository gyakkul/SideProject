// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMPin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UObject;
class URigVMGraph;
class URigVMLink;
class URigVMNode;
class URigVMPin;
class UScriptStruct;
enum class ERigVMPinDirection : uint8;
#ifdef RIGVMDEVELOPER_RigVMPin_generated_h
#error "RigVMPin.generated.h already included, missing '#pragma once' in RigVMPin.h"
#endif
#define RIGVMDEVELOPER_RigVMPin_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPin); \
	DECLARE_FUNCTION(execGetGraph);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPin); \
	DECLARE_FUNCTION(execGetGraph);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMInjectionInfo(); \
	friend struct Z_Construct_UClass_URigVMInjectionInfo_Statics; \
public: \
	DECLARE_CLASS(URigVMInjectionInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMInjectionInfo)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_INCLASS \
private: \
	static void StaticRegisterNativesURigVMInjectionInfo(); \
	friend struct Z_Construct_UClass_URigVMInjectionInfo_Statics; \
public: \
	DECLARE_CLASS(URigVMInjectionInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMInjectionInfo)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMInjectionInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMInjectionInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMInjectionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMInjectionInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMInjectionInfo(URigVMInjectionInfo&&); \
	NO_API URigVMInjectionInfo(const URigVMInjectionInfo&); \
public: \
	NO_API virtual ~URigVMInjectionInfo();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMInjectionInfo(URigVMInjectionInfo&&); \
	NO_API URigVMInjectionInfo(const URigVMInjectionInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMInjectionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMInjectionInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMInjectionInfo) \
	NO_API virtual ~URigVMInjectionInfo();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_26_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMInjectionInfo>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetTargetLinks); \
	DECLARE_FUNCTION(execGetSourceLinks); \
	DECLARE_FUNCTION(execGetLinkedTargetPins); \
	DECLARE_FUNCTION(execGetLinkedSourcePins); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execFindSubPin); \
	DECLARE_FUNCTION(execGetSubPins); \
	DECLARE_FUNCTION(execGetOriginalPinFromInjectedNode); \
	DECLARE_FUNCTION(execFindLinkForPin); \
	DECLARE_FUNCTION(execGetPinForLink); \
	DECLARE_FUNCTION(execIsRootPin); \
	DECLARE_FUNCTION(execGetRootPin); \
	DECLARE_FUNCTION(execGetParentPin); \
	DECLARE_FUNCTION(execGetEnum); \
	DECLARE_FUNCTION(execGetScriptStruct); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetCustomWidgetName); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execIsFixedSizeArray); \
	DECLARE_FUNCTION(execContainsWildCardSubPin); \
	DECLARE_FUNCTION(execIsWildCard); \
	DECLARE_FUNCTION(execIsExecuteContext); \
	DECLARE_FUNCTION(execIsStringType); \
	DECLARE_FUNCTION(execGetArrayElementCppType); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execGetArraySize); \
	DECLARE_FUNCTION(execGetAbsolutePinIndex); \
	DECLARE_FUNCTION(execGetPinIndex); \
	DECLARE_FUNCTION(execIsLazy); \
	DECLARE_FUNCTION(execIsReferenceCountedContainer); \
	DECLARE_FUNCTION(execIsDynamicArray); \
	DECLARE_FUNCTION(execIsArrayElement); \
	DECLARE_FUNCTION(execIsArray); \
	DECLARE_FUNCTION(execIsInterface); \
	DECLARE_FUNCTION(execIsUObject); \
	DECLARE_FUNCTION(execIsStructMember); \
	DECLARE_FUNCTION(execIsStruct); \
	DECLARE_FUNCTION(execIsEnum); \
	DECLARE_FUNCTION(execRequiresWatch); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsExpanded); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetSegmentPath); \
	DECLARE_FUNCTION(execGetSubPinPath); \
	DECLARE_FUNCTION(execGetPinPath);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetTargetLinks); \
	DECLARE_FUNCTION(execGetSourceLinks); \
	DECLARE_FUNCTION(execGetLinkedTargetPins); \
	DECLARE_FUNCTION(execGetLinkedSourcePins); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execFindSubPin); \
	DECLARE_FUNCTION(execGetSubPins); \
	DECLARE_FUNCTION(execGetOriginalPinFromInjectedNode); \
	DECLARE_FUNCTION(execFindLinkForPin); \
	DECLARE_FUNCTION(execGetPinForLink); \
	DECLARE_FUNCTION(execIsRootPin); \
	DECLARE_FUNCTION(execGetRootPin); \
	DECLARE_FUNCTION(execGetParentPin); \
	DECLARE_FUNCTION(execGetEnum); \
	DECLARE_FUNCTION(execGetScriptStruct); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetCustomWidgetName); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execIsFixedSizeArray); \
	DECLARE_FUNCTION(execContainsWildCardSubPin); \
	DECLARE_FUNCTION(execIsWildCard); \
	DECLARE_FUNCTION(execIsExecuteContext); \
	DECLARE_FUNCTION(execIsStringType); \
	DECLARE_FUNCTION(execGetArrayElementCppType); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execGetArraySize); \
	DECLARE_FUNCTION(execGetAbsolutePinIndex); \
	DECLARE_FUNCTION(execGetPinIndex); \
	DECLARE_FUNCTION(execIsLazy); \
	DECLARE_FUNCTION(execIsReferenceCountedContainer); \
	DECLARE_FUNCTION(execIsDynamicArray); \
	DECLARE_FUNCTION(execIsArrayElement); \
	DECLARE_FUNCTION(execIsArray); \
	DECLARE_FUNCTION(execIsInterface); \
	DECLARE_FUNCTION(execIsUObject); \
	DECLARE_FUNCTION(execIsStructMember); \
	DECLARE_FUNCTION(execIsStruct); \
	DECLARE_FUNCTION(execIsEnum); \
	DECLARE_FUNCTION(execRequiresWatch); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsExpanded); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetSegmentPath); \
	DECLARE_FUNCTION(execGetSubPinPath); \
	DECLARE_FUNCTION(execGetPinPath);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMPin(); \
	friend struct Z_Construct_UClass_URigVMPin_Statics; \
public: \
	DECLARE_CLASS(URigVMPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMPin)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_INCLASS \
private: \
	static void StaticRegisterNativesURigVMPin(); \
	friend struct Z_Construct_UClass_URigVMPin_Statics; \
public: \
	DECLARE_CLASS(URigVMPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMPin)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMPin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMPin(URigVMPin&&); \
	NO_API URigVMPin(const URigVMPin&); \
public: \
	NO_API virtual ~URigVMPin();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMPin(URigVMPin&&); \
	NO_API URigVMPin(const URigVMPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMPin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMPin) \
	NO_API virtual ~URigVMPin();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_85_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMPin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
