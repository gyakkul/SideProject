// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
class UControlRigComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
enum class EControlRigComponentSpace : uint8;
enum class ERigElementType : uint8;
struct FControlRigComponentMappedBone;
struct FControlRigComponentMappedComponent;
struct FControlRigComponentMappedCurve;
struct FControlRigComponentMappedElement;
#ifdef CONTROLRIG_ControlRigComponent_generated_h
#error "ControlRigComponent.generated.h already included, missing '#pragma once' in ControlRigComponent.h"
#endif
#define CONTROLRIG_ControlRigComponent_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigComponentMappedElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigComponentMappedElement>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigComponentMappedComponent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigComponentMappedComponent>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigComponentMappedBone_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigComponentMappedBone>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigComponentMappedCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigComponentMappedCurve>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_172_DELEGATE \
CONTROLRIG_API void FControlRigComponentDelegate_DelegateWrapper(const FMulticastScriptDelegate& ControlRigComponentDelegate, UControlRigComponent* Component);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_RPC_WRAPPERS \
	virtual void OnPostForwardsSolve_Implementation(UControlRigComponent* Component); \
	virtual void OnPreForwardsSolve_Implementation(UControlRigComponent* Component); \
	virtual void OnPostConstruction_Implementation(UControlRigComponent* Component); \
	virtual void OnPreConstruction_Implementation(UControlRigComponent* Component); \
	virtual void OnPostInitialize_Implementation(UControlRigComponent* Component); \
	virtual void OnPreInitialize_Implementation(UControlRigComponent* Component); \
 \
	DECLARE_FUNCTION(execSetObjectBinding); \
	DECLARE_FUNCTION(execSetControlRigClass); \
	DECLARE_FUNCTION(execSetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetSpaceTransform); \
	DECLARE_FUNCTION(execSetControlOffset); \
	DECLARE_FUNCTION(execGetControlOffset); \
	DECLARE_FUNCTION(execSetControlTransform); \
	DECLARE_FUNCTION(execSetControlScale); \
	DECLARE_FUNCTION(execSetControlRotator); \
	DECLARE_FUNCTION(execSetControlPosition); \
	DECLARE_FUNCTION(execSetControlVector2D); \
	DECLARE_FUNCTION(execSetControlInt); \
	DECLARE_FUNCTION(execSetControlFloat); \
	DECLARE_FUNCTION(execSetControlBool); \
	DECLARE_FUNCTION(execGetControlTransform); \
	DECLARE_FUNCTION(execGetControlScale); \
	DECLARE_FUNCTION(execGetControlRotator); \
	DECLARE_FUNCTION(execGetControlPosition); \
	DECLARE_FUNCTION(execGetControlVector2D); \
	DECLARE_FUNCTION(execGetControlInt); \
	DECLARE_FUNCTION(execGetControlFloat); \
	DECLARE_FUNCTION(execGetControlBool); \
	DECLARE_FUNCTION(execSetInitialBoneTransform); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetInitialBoneTransform); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execDoesElementExist); \
	DECLARE_FUNCTION(execGetElementNames); \
	DECLARE_FUNCTION(execSetBoneInitialTransformsFromSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedCompleteSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedComponents); \
	DECLARE_FUNCTION(execAddMappedElements); \
	DECLARE_FUNCTION(execSetMappedElements); \
	DECLARE_FUNCTION(execClearMappedElements); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnPostForwardsSolve); \
	DECLARE_FUNCTION(execOnPreForwardsSolve); \
	DECLARE_FUNCTION(execOnPostConstruction); \
	DECLARE_FUNCTION(execOnPreConstruction); \
	DECLARE_FUNCTION(execOnPostInitialize); \
	DECLARE_FUNCTION(execOnPreInitialize); \
	DECLARE_FUNCTION(execGetAbsoluteTime); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execGetControlRig);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPostForwardsSolve_Implementation(UControlRigComponent* Component); \
	virtual void OnPreForwardsSolve_Implementation(UControlRigComponent* Component); \
	virtual void OnPostConstruction_Implementation(UControlRigComponent* Component); \
	virtual void OnPreConstruction_Implementation(UControlRigComponent* Component); \
	virtual void OnPostInitialize_Implementation(UControlRigComponent* Component); \
	virtual void OnPreInitialize_Implementation(UControlRigComponent* Component); \
 \
	DECLARE_FUNCTION(execSetObjectBinding); \
	DECLARE_FUNCTION(execSetControlRigClass); \
	DECLARE_FUNCTION(execSetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetInitialSpaceTransform); \
	DECLARE_FUNCTION(execGetSpaceTransform); \
	DECLARE_FUNCTION(execSetControlOffset); \
	DECLARE_FUNCTION(execGetControlOffset); \
	DECLARE_FUNCTION(execSetControlTransform); \
	DECLARE_FUNCTION(execSetControlScale); \
	DECLARE_FUNCTION(execSetControlRotator); \
	DECLARE_FUNCTION(execSetControlPosition); \
	DECLARE_FUNCTION(execSetControlVector2D); \
	DECLARE_FUNCTION(execSetControlInt); \
	DECLARE_FUNCTION(execSetControlFloat); \
	DECLARE_FUNCTION(execSetControlBool); \
	DECLARE_FUNCTION(execGetControlTransform); \
	DECLARE_FUNCTION(execGetControlScale); \
	DECLARE_FUNCTION(execGetControlRotator); \
	DECLARE_FUNCTION(execGetControlPosition); \
	DECLARE_FUNCTION(execGetControlVector2D); \
	DECLARE_FUNCTION(execGetControlInt); \
	DECLARE_FUNCTION(execGetControlFloat); \
	DECLARE_FUNCTION(execGetControlBool); \
	DECLARE_FUNCTION(execSetInitialBoneTransform); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetInitialBoneTransform); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execDoesElementExist); \
	DECLARE_FUNCTION(execGetElementNames); \
	DECLARE_FUNCTION(execSetBoneInitialTransformsFromSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedCompleteSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedSkeletalMesh); \
	DECLARE_FUNCTION(execAddMappedComponents); \
	DECLARE_FUNCTION(execAddMappedElements); \
	DECLARE_FUNCTION(execSetMappedElements); \
	DECLARE_FUNCTION(execClearMappedElements); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execOnPostForwardsSolve); \
	DECLARE_FUNCTION(execOnPreForwardsSolve); \
	DECLARE_FUNCTION(execOnPostConstruction); \
	DECLARE_FUNCTION(execOnPreConstruction); \
	DECLARE_FUNCTION(execOnPostInitialize); \
	DECLARE_FUNCTION(execOnPreInitialize); \
	DECLARE_FUNCTION(execGetAbsoluteTime); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execGetControlRig);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigComponent, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigComponent(); \
	friend struct Z_Construct_UClass_UControlRigComponent_Statics; \
public: \
	DECLARE_CLASS(UControlRigComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigComponent) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigComponent(); \
	friend struct Z_Construct_UClass_UControlRigComponent_Statics; \
public: \
	DECLARE_CLASS(UControlRigComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UControlRigComponent) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigComponent(UControlRigComponent&&); \
	NO_API UControlRigComponent(const UControlRigComponent&); \
public: \
	NO_API virtual ~UControlRigComponent();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigComponent(UControlRigComponent&&); \
	NO_API UControlRigComponent(const UControlRigComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigComponent) \
	NO_API virtual ~UControlRigComponent();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_175_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h_178_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlRigComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UControlRigComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigComponent_h


#define FOREACH_ENUM_ECONTROLRIGCOMPONENTSPACE(op) \
	op(EControlRigComponentSpace::WorldSpace) \
	op(EControlRigComponentSpace::ActorSpace) \
	op(EControlRigComponentSpace::ComponentSpace) \
	op(EControlRigComponentSpace::RigSpace) \
	op(EControlRigComponentSpace::LocalSpace) \
	op(EControlRigComponentSpace::Max) 

enum class EControlRigComponentSpace : uint8;
template<> struct TIsUEnumClass<EControlRigComponentSpace> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigComponentSpace>();

#define FOREACH_ENUM_ECONTROLRIGCOMPONENTMAPDIRECTION(op) \
	op(EControlRigComponentMapDirection::Input) \
	op(EControlRigComponentMapDirection::Output) 

enum class EControlRigComponentMapDirection : uint8;
template<> struct TIsUEnumClass<EControlRigComponentMapDirection> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigComponentMapDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
