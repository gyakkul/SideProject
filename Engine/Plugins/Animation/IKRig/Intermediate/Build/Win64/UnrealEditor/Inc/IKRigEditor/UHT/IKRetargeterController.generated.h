// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargeterController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FIKRetargetPose;
class UIKRetargeter;
class UIKRetargeterController;
class UIKRigDefinition;
class URetargetChainSettings;
class USkeletalMesh;
enum class EAutoMapChainType : uint8;
enum class ERetargetSourceOrTarget : uint8;
struct FIKRetargetPose;
struct FRetargetGlobalSettings;
struct FTargetChainSettings;
struct FTargetRootSettings;
#ifdef IKRIGEDITOR_IKRetargeterController_generated_h
#error "IKRetargeterController.generated.h already included, missing '#pragma once' in IKRetargeterController.h"
#endif
#define IKRIGEDITOR_IKRetargeterController_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execSetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execGetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execSetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execResetRetargetPose); \
	DECLARE_FUNCTION(execGetCurrentRetargetPose); \
	DECLARE_FUNCTION(execGetRetargetPoses); \
	DECLARE_FUNCTION(execGetCurrentRetargetPoseName); \
	DECLARE_FUNCTION(execSetCurrentRetargetPose); \
	DECLARE_FUNCTION(execRenameRetargetPose); \
	DECLARE_FUNCTION(execDuplicateRetargetPose); \
	DECLARE_FUNCTION(execRemoveRetargetPose); \
	DECLARE_FUNCTION(execCreateRetargetPose); \
	DECLARE_FUNCTION(execGetAllChainSettings); \
	DECLARE_FUNCTION(execGetSourceChain); \
	DECLARE_FUNCTION(execSetSourceChain); \
	DECLARE_FUNCTION(execAutoMapChains); \
	DECLARE_FUNCTION(execSetRetargetChainSettings); \
	DECLARE_FUNCTION(execGetRetargetChainSettings); \
	DECLARE_FUNCTION(execSetGlobalSettings); \
	DECLARE_FUNCTION(execGetGlobalSettings); \
	DECLARE_FUNCTION(execSetRootSettings); \
	DECLARE_FUNCTION(execGetRootSettings); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execGetIKRig); \
	DECLARE_FUNCTION(execSetIKRig); \
	DECLARE_FUNCTION(execGetController);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execSetRootOffsetInRetargetPose); \
	DECLARE_FUNCTION(execGetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execSetRotationOffsetForRetargetPoseBone); \
	DECLARE_FUNCTION(execResetRetargetPose); \
	DECLARE_FUNCTION(execGetCurrentRetargetPose); \
	DECLARE_FUNCTION(execGetRetargetPoses); \
	DECLARE_FUNCTION(execGetCurrentRetargetPoseName); \
	DECLARE_FUNCTION(execSetCurrentRetargetPose); \
	DECLARE_FUNCTION(execRenameRetargetPose); \
	DECLARE_FUNCTION(execDuplicateRetargetPose); \
	DECLARE_FUNCTION(execRemoveRetargetPose); \
	DECLARE_FUNCTION(execCreateRetargetPose); \
	DECLARE_FUNCTION(execGetAllChainSettings); \
	DECLARE_FUNCTION(execGetSourceChain); \
	DECLARE_FUNCTION(execSetSourceChain); \
	DECLARE_FUNCTION(execAutoMapChains); \
	DECLARE_FUNCTION(execSetRetargetChainSettings); \
	DECLARE_FUNCTION(execGetRetargetChainSettings); \
	DECLARE_FUNCTION(execSetGlobalSettings); \
	DECLARE_FUNCTION(execGetGlobalSettings); \
	DECLARE_FUNCTION(execSetRootSettings); \
	DECLARE_FUNCTION(execGetRootSettings); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh); \
	DECLARE_FUNCTION(execGetIKRig); \
	DECLARE_FUNCTION(execSetIKRig); \
	DECLARE_FUNCTION(execGetController);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargeterController(); \
	friend struct Z_Construct_UClass_UIKRetargeterController_Statics; \
public: \
	DECLARE_CLASS(UIKRetargeterController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargeterController) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUIKRetargeterController(); \
	friend struct Z_Construct_UClass_UIKRetargeterController_Statics; \
public: \
	DECLARE_CLASS(UIKRetargeterController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargeterController) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargeterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargeterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargeterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargeterController(UIKRetargeterController&&); \
	NO_API UIKRetargeterController(const UIKRetargeterController&); \
public: \
	NO_API virtual ~UIKRetargeterController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargeterController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargeterController(UIKRetargeterController&&); \
	NO_API UIKRetargeterController(const UIKRetargeterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargeterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeterController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargeterController) \
	NO_API virtual ~UIKRetargeterController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_30_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRetargeterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargeterController_h


#define FOREACH_ENUM_EAUTOMAPCHAINTYPE(op) \
	op(EAutoMapChainType::Exact) \
	op(EAutoMapChainType::Fuzzy) \
	op(EAutoMapChainType::Clear) 

enum class EAutoMapChainType : uint8;
template<> struct TIsUEnumClass<EAutoMapChainType> { enum { Value = true }; };
template<> IKRIGEDITOR_API UEnum* StaticEnum<EAutoMapChainType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
