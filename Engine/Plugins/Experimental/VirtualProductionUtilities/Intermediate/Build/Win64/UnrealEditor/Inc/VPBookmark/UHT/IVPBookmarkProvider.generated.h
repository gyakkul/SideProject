// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVPBookmarkProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVPBookmark;
#ifdef VPBOOKMARK_IVPBookmarkProvider_generated_h
#error "IVPBookmarkProvider.generated.h already included, missing '#pragma once' in IVPBookmarkProvider.h"
#endif
#define VPBOOKMARK_IVPBookmarkProvider_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_RPC_WRAPPERS \
	virtual void GenerateBookmarkName_Implementation() {}; \
	virtual void HideBookmarkSplineMeshIndicator_Implementation() {}; \
	virtual void UpdateBookmarkSplineMeshIndicator_Implementation() {}; \
	virtual void OnBookmarkChanged_Implementation(UVPBookmark* Bookmark) {}; \
	virtual void OnBookmarkActivation_Implementation(UVPBookmark* Bookmark, bool bActivate) {}; \
 \
	DECLARE_FUNCTION(execGenerateBookmarkName); \
	DECLARE_FUNCTION(execHideBookmarkSplineMeshIndicator); \
	DECLARE_FUNCTION(execUpdateBookmarkSplineMeshIndicator); \
	DECLARE_FUNCTION(execOnBookmarkChanged); \
	DECLARE_FUNCTION(execOnBookmarkActivation);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GenerateBookmarkName_Implementation() {}; \
	virtual void HideBookmarkSplineMeshIndicator_Implementation() {}; \
	virtual void UpdateBookmarkSplineMeshIndicator_Implementation() {}; \
	virtual void OnBookmarkChanged_Implementation(UVPBookmark* Bookmark) {}; \
	virtual void OnBookmarkActivation_Implementation(UVPBookmark* Bookmark, bool bActivate) {}; \
 \
	DECLARE_FUNCTION(execGenerateBookmarkName); \
	DECLARE_FUNCTION(execHideBookmarkSplineMeshIndicator); \
	DECLARE_FUNCTION(execUpdateBookmarkSplineMeshIndicator); \
	DECLARE_FUNCTION(execOnBookmarkChanged); \
	DECLARE_FUNCTION(execOnBookmarkActivation);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkProvider(UVPBookmarkProvider&&); \
	NO_API UVPBookmarkProvider(const UVPBookmarkProvider&); \
public: \
	NO_API virtual ~UVPBookmarkProvider();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkProvider(UVPBookmarkProvider&&); \
	NO_API UVPBookmarkProvider(const UVPBookmarkProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkProvider) \
	NO_API virtual ~UVPBookmarkProvider();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVPBookmarkProvider(); \
	friend struct Z_Construct_UClass_UVPBookmarkProvider_Statics; \
public: \
	DECLARE_CLASS(UVPBookmarkProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VPBookmark"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmarkProvider)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVPBookmarkProvider() {} \
public: \
	typedef UVPBookmarkProvider UClassType; \
	typedef IVPBookmarkProvider ThisClass; \
	static void Execute_GenerateBookmarkName(UObject* O); \
	static void Execute_HideBookmarkSplineMeshIndicator(UObject* O); \
	static void Execute_OnBookmarkActivation(UObject* O, UVPBookmark* Bookmark, bool bActivate); \
	static void Execute_OnBookmarkChanged(UObject* O, UVPBookmark* Bookmark); \
	static void Execute_UpdateBookmarkSplineMeshIndicator(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IVPBookmarkProvider() {} \
public: \
	typedef UVPBookmarkProvider UClassType; \
	typedef IVPBookmarkProvider ThisClass; \
	static void Execute_GenerateBookmarkName(UObject* O); \
	static void Execute_HideBookmarkSplineMeshIndicator(UObject* O); \
	static void Execute_OnBookmarkActivation(UObject* O, UVPBookmark* Bookmark, bool bActivate); \
	static void Execute_OnBookmarkChanged(UObject* O, UVPBookmark* Bookmark); \
	static void Execute_UpdateBookmarkSplineMeshIndicator(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPBOOKMARK_API UClass* StaticClass<class UVPBookmarkProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_IVPBookmarkProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
