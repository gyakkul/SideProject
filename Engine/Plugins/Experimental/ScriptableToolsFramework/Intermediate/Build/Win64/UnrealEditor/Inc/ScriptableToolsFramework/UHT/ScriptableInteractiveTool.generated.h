// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptableInteractiveTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UScriptableInteractiveTool;
class UScriptableInteractiveToolPropertySet;
class UScriptableTool_HUDAPI;
class UScriptableTool_RenderAPI;
class UWorld;
enum class EToolsFrameworkOutcomePins : uint8;
enum class EToolShutdownType : uint8;
struct FInputRayHit;
struct FLinearColor;
struct FScriptableToolGizmoOptions;
#ifdef SCRIPTABLETOOLSFRAMEWORK_ScriptableInteractiveTool_generated_h
#error "ScriptableInteractiveTool.generated.h already included, missing '#pragma once' in ScriptableInteractiveTool.h"
#endif
#define SCRIPTABLETOOLSFRAMEWORK_ScriptableInteractiveTool_generated_h

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptableToolModifierStates_Statics; \
	SCRIPTABLETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FScriptableToolModifierStates>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptableToolGizmoOptions_Statics; \
	SCRIPTABLETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FScriptableToolGizmoOptions>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawRectWidthHeightXY); \
	DECLARE_FUNCTION(execDrawLine);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawRectWidthHeightXY); \
	DECLARE_FUNCTION(execDrawLine);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableTool_RenderAPI(); \
	friend struct Z_Construct_UClass_UScriptableTool_RenderAPI_Statics; \
public: \
	DECLARE_CLASS(UScriptableTool_RenderAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableTool_RenderAPI)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableTool_RenderAPI(); \
	friend struct Z_Construct_UClass_UScriptableTool_RenderAPI_Statics; \
public: \
	DECLARE_CLASS(UScriptableTool_RenderAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableTool_RenderAPI)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableTool_RenderAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_RenderAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableTool_RenderAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_RenderAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableTool_RenderAPI(UScriptableTool_RenderAPI&&); \
	NO_API UScriptableTool_RenderAPI(const UScriptableTool_RenderAPI&); \
public: \
	NO_API virtual ~UScriptableTool_RenderAPI();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableTool_RenderAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableTool_RenderAPI(UScriptableTool_RenderAPI&&); \
	NO_API UScriptableTool_RenderAPI(const UScriptableTool_RenderAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableTool_RenderAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_RenderAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_RenderAPI) \
	NO_API virtual ~UScriptableTool_RenderAPI();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_164_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableTool_RenderAPI>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCanvasLocation); \
	DECLARE_FUNCTION(execDrawTextArrayAtLocation); \
	DECLARE_FUNCTION(execDrawTextAtLocation);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCanvasLocation); \
	DECLARE_FUNCTION(execDrawTextArrayAtLocation); \
	DECLARE_FUNCTION(execDrawTextAtLocation);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableTool_HUDAPI(); \
	friend struct Z_Construct_UClass_UScriptableTool_HUDAPI_Statics; \
public: \
	DECLARE_CLASS(UScriptableTool_HUDAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableTool_HUDAPI)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableTool_HUDAPI(); \
	friend struct Z_Construct_UClass_UScriptableTool_HUDAPI_Statics; \
public: \
	DECLARE_CLASS(UScriptableTool_HUDAPI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableTool_HUDAPI)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableTool_HUDAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_HUDAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableTool_HUDAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_HUDAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableTool_HUDAPI(UScriptableTool_HUDAPI&&); \
	NO_API UScriptableTool_HUDAPI(const UScriptableTool_HUDAPI&); \
public: \
	NO_API virtual ~UScriptableTool_HUDAPI();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableTool_HUDAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableTool_HUDAPI(UScriptableTool_HUDAPI&&); \
	NO_API UScriptableTool_HUDAPI(const UScriptableTool_HUDAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableTool_HUDAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableTool_HUDAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableTool_HUDAPI) \
	NO_API virtual ~UScriptableTool_HUDAPI();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_193_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_196_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableTool_HUDAPI>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningTool);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningTool);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveToolPropertySet(); \
	friend struct Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics; \
public: \
	DECLARE_CLASS(UScriptableInteractiveToolPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableInteractiveToolPropertySet)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveToolPropertySet(); \
	friend struct Z_Construct_UClass_UScriptableInteractiveToolPropertySet_Statics; \
public: \
	DECLARE_CLASS(UScriptableInteractiveToolPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableInteractiveToolPropertySet)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableInteractiveToolPropertySet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableInteractiveToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveToolPropertySet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableInteractiveToolPropertySet(UScriptableInteractiveToolPropertySet&&); \
	NO_API UScriptableInteractiveToolPropertySet(const UScriptableInteractiveToolPropertySet&); \
public: \
	NO_API virtual ~UScriptableInteractiveToolPropertySet();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableInteractiveToolPropertySet(UScriptableInteractiveToolPropertySet&&); \
	NO_API UScriptableInteractiveToolPropertySet(const UScriptableInteractiveToolPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableInteractiveToolPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveToolPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableInteractiveToolPropertySet) \
	NO_API virtual ~UScriptableInteractiveToolPropertySet();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_238_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableInteractiveToolPropertySet>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_256_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_257_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolFloatPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFloatPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, double NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_258_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolIntPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolIntPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, int32 NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_259_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolBoolPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolBoolPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, bool bNewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_260_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolEnumPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolEnumPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, uint8 NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_261_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolStringPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolStringPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FString& NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_262_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolFNamePropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolFNamePropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, FName NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_263_DELEGATE \
SCRIPTABLETOOLSFRAMEWORK_API void FToolObjectPropertyModifiedDelegate_DelegateWrapper(const FScriptDelegate& ToolObjectPropertyModifiedDelegate, UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, UObject* NewValue);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_RPC_WRAPPERS \
	virtual bool OnScriptCanAccept_Implementation() const; \
 \
	DECLARE_FUNCTION(execClearUserMessages); \
	DECLARE_FUNCTION(execDisplayUserWarningMessage); \
	DECLARE_FUNCTION(execDisplayUserHelpMessage); \
	DECLARE_FUNCTION(execAddLogMessage); \
	DECLARE_FUNCTION(execGetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoVisible); \
	DECLARE_FUNCTION(execDestroyTRSGizmo); \
	DECLARE_FUNCTION(execCreateTRSGizmo); \
	DECLARE_FUNCTION(execWatchProperty); \
	DECLARE_FUNCTION(execWatchObjectProperty); \
	DECLARE_FUNCTION(execWatchNameProperty); \
	DECLARE_FUNCTION(execWatchStringProperty); \
	DECLARE_FUNCTION(execWatchEnumProperty); \
	DECLARE_FUNCTION(execWatchBoolProperty); \
	DECLARE_FUNCTION(execWatchIntProperty); \
	DECLARE_FUNCTION(execWatchFloatProperty); \
	DECLARE_FUNCTION(execSavePropertySetSettings); \
	DECLARE_FUNCTION(execRestorePropertySetSettings); \
	DECLARE_FUNCTION(execForcePropertySetUpdateByName); \
	DECLARE_FUNCTION(execSetPropertySetVisibleByName); \
	DECLARE_FUNCTION(execRemovePropertySetByName); \
	DECLARE_FUNCTION(execAddPropertySetOfType); \
	DECLARE_FUNCTION(execGetToolWorld); \
	DECLARE_FUNCTION(execRequestToolShutdown); \
	DECLARE_FUNCTION(execOnScriptCanAccept);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearUserMessages); \
	DECLARE_FUNCTION(execDisplayUserWarningMessage); \
	DECLARE_FUNCTION(execDisplayUserHelpMessage); \
	DECLARE_FUNCTION(execAddLogMessage); \
	DECLARE_FUNCTION(execGetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoTransform); \
	DECLARE_FUNCTION(execSetGizmoVisible); \
	DECLARE_FUNCTION(execDestroyTRSGizmo); \
	DECLARE_FUNCTION(execCreateTRSGizmo); \
	DECLARE_FUNCTION(execWatchProperty); \
	DECLARE_FUNCTION(execWatchObjectProperty); \
	DECLARE_FUNCTION(execWatchNameProperty); \
	DECLARE_FUNCTION(execWatchStringProperty); \
	DECLARE_FUNCTION(execWatchEnumProperty); \
	DECLARE_FUNCTION(execWatchBoolProperty); \
	DECLARE_FUNCTION(execWatchIntProperty); \
	DECLARE_FUNCTION(execWatchFloatProperty); \
	DECLARE_FUNCTION(execSavePropertySetSettings); \
	DECLARE_FUNCTION(execRestorePropertySetSettings); \
	DECLARE_FUNCTION(execForcePropertySetUpdateByName); \
	DECLARE_FUNCTION(execSetPropertySetVisibleByName); \
	DECLARE_FUNCTION(execRemovePropertySetByName); \
	DECLARE_FUNCTION(execAddPropertySetOfType); \
	DECLARE_FUNCTION(execGetToolWorld); \
	DECLARE_FUNCTION(execRequestToolShutdown); \
	DECLARE_FUNCTION(execOnScriptCanAccept);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveTool(); \
	friend struct Z_Construct_UClass_UScriptableInteractiveTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableInteractiveTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableInteractiveTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableInteractiveTool(); \
	friend struct Z_Construct_UClass_UScriptableInteractiveTool_Statics; \
public: \
	DECLARE_CLASS(UScriptableInteractiveTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableInteractiveTool)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableInteractiveTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableInteractiveTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableInteractiveTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableInteractiveTool(UScriptableInteractiveTool&&); \
	NO_API UScriptableInteractiveTool(const UScriptableInteractiveTool&); \
public: \
	NO_API virtual ~UScriptableInteractiveTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableInteractiveTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableInteractiveTool(UScriptableInteractiveTool&&); \
	NO_API UScriptableInteractiveTool(const UScriptableInteractiveTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableInteractiveTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableInteractiveTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScriptableInteractiveTool) \
	NO_API virtual ~UScriptableInteractiveTool();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_270_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableInteractiveTool>();

#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeInputRayHit); \
	DECLARE_FUNCTION(execMakeInputRayHit_MaxDepth); \
	DECLARE_FUNCTION(execMakeInputRayHit_Miss);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeInputRayHit); \
	DECLARE_FUNCTION(execMakeInputRayHit_MaxDepth); \
	DECLARE_FUNCTION(execMakeInputRayHit_Miss);


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_ACCESSORS
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolsUtilityLibrary(); \
	friend struct Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptableToolsUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableToolsUtilityLibrary)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_INCLASS \
private: \
	static void StaticRegisterNativesUScriptableToolsUtilityLibrary(); \
	friend struct Z_Construct_UClass_UScriptableToolsUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UScriptableToolsUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UScriptableToolsUtilityLibrary)


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableToolsUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolsUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableToolsUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolsUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableToolsUtilityLibrary(UScriptableToolsUtilityLibrary&&); \
	NO_API UScriptableToolsUtilityLibrary(const UScriptableToolsUtilityLibrary&); \
public: \
	NO_API virtual ~UScriptableToolsUtilityLibrary();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptableToolsUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptableToolsUtilityLibrary(UScriptableToolsUtilityLibrary&&); \
	NO_API UScriptableToolsUtilityLibrary(const UScriptableToolsUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptableToolsUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolsUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolsUtilityLibrary) \
	NO_API virtual ~UScriptableToolsUtilityLibrary();


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_731_PROLOG
#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_INCLASS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_ACCESSORS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h_734_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<class UScriptableToolsUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableInteractiveTool_h


#define FOREACH_ENUM_ETOOLSFRAMEWORKOUTCOMEPINS(op) \
	op(EToolsFrameworkOutcomePins::Success) \
	op(EToolsFrameworkOutcomePins::Failure) 

enum class EToolsFrameworkOutcomePins : uint8;
template<> struct TIsUEnumClass<EToolsFrameworkOutcomePins> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolsFrameworkOutcomePins>();

#define FOREACH_ENUM_ESCRIPTABLETOOLSHUTDOWNTYPE(op) \
	op(EScriptableToolShutdownType::Complete) \
	op(EScriptableToolShutdownType::AcceptCancel) 

enum class EScriptableToolShutdownType : uint8;
template<> struct TIsUEnumClass<EScriptableToolShutdownType> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolShutdownType>();

#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOMODE(op) \
	op(EScriptableToolGizmoMode::TranslationOnly) \
	op(EScriptableToolGizmoMode::RotationOnly) \
	op(EScriptableToolGizmoMode::ScaleOnly) \
	op(EScriptableToolGizmoMode::Combined) \
	op(EScriptableToolGizmoMode::FromViewportSettings) 

enum class EScriptableToolGizmoMode : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoMode> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoMode>();

#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOCOORDINATESYSTEM(op) \
	op(EScriptableToolGizmoCoordinateSystem::World) \
	op(EScriptableToolGizmoCoordinateSystem::Local) \
	op(EScriptableToolGizmoCoordinateSystem::FromViewportSettings) 

enum class EScriptableToolGizmoCoordinateSystem : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoCoordinateSystem> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoCoordinateSystem>();

#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOTRANSLATION(op) \
	op(EScriptableToolGizmoTranslation::None) \
	op(EScriptableToolGizmoTranslation::TranslateAxisX) \
	op(EScriptableToolGizmoTranslation::TranslateAxisY) \
	op(EScriptableToolGizmoTranslation::TranslateAxisZ) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneXY) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneXZ) \
	op(EScriptableToolGizmoTranslation::TranslatePlaneYZ) \
	op(EScriptableToolGizmoTranslation::All) 

enum class EScriptableToolGizmoTranslation : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoTranslation> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoTranslation>();

#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOROTATION(op) \
	op(EScriptableToolGizmoRotation::None) \
	op(EScriptableToolGizmoRotation::RotateAxisX) \
	op(EScriptableToolGizmoRotation::RotateAxisY) \
	op(EScriptableToolGizmoRotation::RotateAxisZ) \
	op(EScriptableToolGizmoRotation::All) 

enum class EScriptableToolGizmoRotation : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoRotation> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoRotation>();

#define FOREACH_ENUM_ESCRIPTABLETOOLGIZMOSCALE(op) \
	op(EScriptableToolGizmoScale::None) \
	op(EScriptableToolGizmoScale::ScaleAxisX) \
	op(EScriptableToolGizmoScale::ScaleAxisY) \
	op(EScriptableToolGizmoScale::ScaleAxisZ) \
	op(EScriptableToolGizmoScale::ScalePlaneXY) \
	op(EScriptableToolGizmoScale::ScalePlaneXZ) \
	op(EScriptableToolGizmoScale::ScalePlaneYZ) \
	op(EScriptableToolGizmoScale::ScaleUniform) \
	op(EScriptableToolGizmoScale::All) 

enum class EScriptableToolGizmoScale : uint8;
template<> struct TIsUEnumClass<EScriptableToolGizmoScale> { enum { Value = true }; };
template<> SCRIPTABLETOOLSFRAMEWORK_API UEnum* StaticEnum<EScriptableToolGizmoScale>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
