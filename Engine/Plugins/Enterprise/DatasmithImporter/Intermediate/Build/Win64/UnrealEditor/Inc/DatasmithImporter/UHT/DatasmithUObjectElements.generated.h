// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectElements/DatasmithUObjectElements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithActorBindingElement;
class UDatasmithActorElement;
class UDatasmithBasePropertyCaptureElement;
class UDatasmithKeyValueProperty;
class UDatasmithMaterialIDElement;
class UDatasmithMeshElement;
class UDatasmithObjectElement;
class UDatasmithObjectPropertyCaptureElement;
class UDatasmithPostProcessElement;
class UDatasmithPropertyCaptureElement;
class UDatasmithVariantElement;
class UDatasmithVariantSetElement;
enum class EDatasmithColorSpace : uint8;
enum class EDatasmithKeyValuePropertyType : uint8;
enum class EDatasmithPropertyCategory : uint8;
enum class EDatasmithTextureMode : uint8;
struct FColor;
struct FLinearColor;
#ifdef DATASMITHIMPORTER_DatasmithUObjectElements_generated_h
#error "DatasmithUObjectElements.generated.h already included, missing '#pragma once' in DatasmithUObjectElements.h"
#endif
#define DATASMITHIMPORTER_DatasmithUObjectElements_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsElementValid); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execGetElementName);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsElementValid); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execGetElementName);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithObjectElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithObjectElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectElement(UDatasmithObjectElement&&); \
	NO_API UDatasmithObjectElement(const UDatasmithObjectElement&); \
public: \
	NO_API virtual ~UDatasmithObjectElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectElement(UDatasmithObjectElement&&); \
	NO_API UDatasmithObjectElement(const UDatasmithObjectElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectElement) \
	NO_API virtual ~UDatasmithObjectElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_17_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithObjectElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetPropertyType); \
	DECLARE_FUNCTION(execGetPropertyType);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetPropertyType); \
	DECLARE_FUNCTION(execGetPropertyType);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithKeyValueProperty(); \
	friend struct Z_Construct_UClass_UDatasmithKeyValueProperty_Statics; \
public: \
	DECLARE_CLASS(UDatasmithKeyValueProperty, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithKeyValueProperty)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithKeyValueProperty(); \
	friend struct Z_Construct_UClass_UDatasmithKeyValueProperty_Statics; \
public: \
	DECLARE_CLASS(UDatasmithKeyValueProperty, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithKeyValueProperty)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithKeyValueProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithKeyValueProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithKeyValueProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithKeyValueProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithKeyValueProperty(UDatasmithKeyValueProperty&&); \
	NO_API UDatasmithKeyValueProperty(const UDatasmithKeyValueProperty&); \
public: \
	NO_API virtual ~UDatasmithKeyValueProperty();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithKeyValueProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithKeyValueProperty(UDatasmithKeyValueProperty&&); \
	NO_API UDatasmithKeyValueProperty(const UDatasmithKeyValueProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithKeyValueProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithKeyValueProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithKeyValueProperty) \
	NO_API virtual ~UDatasmithKeyValueProperty();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_51_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithKeyValueProperty>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetTranslation); \
	DECLARE_FUNCTION(execGetTranslation);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetLayer); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execGetRotation); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetTranslation); \
	DECLARE_FUNCTION(execGetTranslation);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorElement(UDatasmithActorElement&&); \
	NO_API UDatasmithActorElement(const UDatasmithActorElement&); \
public: \
	NO_API virtual ~UDatasmithActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorElement(UDatasmithActorElement&&); \
	NO_API UDatasmithActorElement(const UDatasmithActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorElement) \
	NO_API virtual ~UDatasmithActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_90_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithActorElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLightmapSourceUV); \
	DECLARE_FUNCTION(execGetLightmapSourceUV); \
	DECLARE_FUNCTION(execSetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightMapArea); \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetBoundingBoxDepth); \
	DECLARE_FUNCTION(execGetBoundingBoxHeight); \
	DECLARE_FUNCTION(execGetBoundingBoxWidth); \
	DECLARE_FUNCTION(execGetFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLightmapSourceUV); \
	DECLARE_FUNCTION(execGetLightmapSourceUV); \
	DECLARE_FUNCTION(execSetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightmapCoordinateIndex); \
	DECLARE_FUNCTION(execGetLightMapArea); \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetBoundingBoxDepth); \
	DECLARE_FUNCTION(execGetBoundingBoxHeight); \
	DECLARE_FUNCTION(execGetBoundingBoxWidth); \
	DECLARE_FUNCTION(execGetFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMeshElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMeshElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshElement(UDatasmithMeshElement&&); \
	NO_API UDatasmithMeshElement(const UDatasmithMeshElement&); \
public: \
	NO_API virtual ~UDatasmithMeshElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshElement(UDatasmithMeshElement&&); \
	NO_API UDatasmithMeshElement(const UDatasmithMeshElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshElement) \
	NO_API virtual ~UDatasmithMeshElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_168_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMeshElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetMeshElement); \
	DECLARE_FUNCTION(execSetStaticMeshPathName); \
	DECLARE_FUNCTION(execGetStaticMeshPathName); \
	DECLARE_FUNCTION(execRemoveMaterialOverride); \
	DECLARE_FUNCTION(execGetMaterials); \
	DECLARE_FUNCTION(execGetMaterialOverridesCount); \
	DECLARE_FUNCTION(execAddMaterialOverride);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundingBoxSize); \
	DECLARE_FUNCTION(execGetMeshElement); \
	DECLARE_FUNCTION(execSetStaticMeshPathName); \
	DECLARE_FUNCTION(execGetStaticMeshPathName); \
	DECLARE_FUNCTION(execRemoveMaterialOverride); \
	DECLARE_FUNCTION(execGetMaterials); \
	DECLARE_FUNCTION(execGetMaterialOverridesCount); \
	DECLARE_FUNCTION(execAddMaterialOverride);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMeshActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMeshActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithMeshActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMeshActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMeshActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshActorElement(UDatasmithMeshActorElement&&); \
	NO_API UDatasmithMeshActorElement(const UDatasmithMeshActorElement&); \
public: \
	NO_API virtual ~UDatasmithMeshActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMeshActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMeshActorElement(UDatasmithMeshActorElement&&); \
	NO_API UDatasmithMeshActorElement(const UDatasmithMeshActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMeshActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMeshActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMeshActorElement) \
	NO_API virtual ~UDatasmithMeshActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_243_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMeshActorElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUseIesBrightness); \
	DECLARE_FUNCTION(execGetUseIesBrightness); \
	DECLARE_FUNCTION(execSetIesBrightnessScale); \
	DECLARE_FUNCTION(execGetIesBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIes); \
	DECLARE_FUNCTION(execGetUseIes); \
	DECLARE_FUNCTION(execSetIesFile); \
	DECLARE_FUNCTION(execGetIesFile); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execGetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetIntensity); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUseIesBrightness); \
	DECLARE_FUNCTION(execGetUseIesBrightness); \
	DECLARE_FUNCTION(execSetIesBrightnessScale); \
	DECLARE_FUNCTION(execGetIesBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIes); \
	DECLARE_FUNCTION(execGetUseIes); \
	DECLARE_FUNCTION(execSetIesFile); \
	DECLARE_FUNCTION(execGetIesFile); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execGetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetIntensity); \
	DECLARE_FUNCTION(execGetIntensity); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithLightActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithLightActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLightActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLightActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithLightActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithLightActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLightActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLightActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLightActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLightActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLightActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLightActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLightActorElement(UDatasmithLightActorElement&&); \
	NO_API UDatasmithLightActorElement(const UDatasmithLightActorElement&); \
public: \
	NO_API virtual ~UDatasmithLightActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLightActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLightActorElement(UDatasmithLightActorElement&&); \
	NO_API UDatasmithLightActorElement(const UDatasmithLightActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLightActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLightActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLightActorElement) \
	NO_API virtual ~UDatasmithLightActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_308_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_311_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithLightActorElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLookAtAllowRoll); \
	DECLARE_FUNCTION(execGetLookAtAllowRoll); \
	DECLARE_FUNCTION(execSetLookAtActor); \
	DECLARE_FUNCTION(execGetLookAtActor); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execSetFStop); \
	DECLARE_FUNCTION(execGetFStop); \
	DECLARE_FUNCTION(execSetFocusDistance); \
	DECLARE_FUNCTION(execGetFocusDistance); \
	DECLARE_FUNCTION(execSetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execSetSensorWidth); \
	DECLARE_FUNCTION(execGetSensorWidth);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLookAtAllowRoll); \
	DECLARE_FUNCTION(execGetLookAtAllowRoll); \
	DECLARE_FUNCTION(execSetLookAtActor); \
	DECLARE_FUNCTION(execGetLookAtActor); \
	DECLARE_FUNCTION(execGetPostProcess); \
	DECLARE_FUNCTION(execSetFocalLength); \
	DECLARE_FUNCTION(execGetFocalLength); \
	DECLARE_FUNCTION(execSetFStop); \
	DECLARE_FUNCTION(execGetFStop); \
	DECLARE_FUNCTION(execSetFocusDistance); \
	DECLARE_FUNCTION(execGetFocusDistance); \
	DECLARE_FUNCTION(execSetSensorAspectRatio); \
	DECLARE_FUNCTION(execGetSensorAspectRatio); \
	DECLARE_FUNCTION(execSetSensorWidth); \
	DECLARE_FUNCTION(execGetSensorWidth);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCameraActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCameraActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCameraActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCameraActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithCameraActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCameraActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCameraActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCameraActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCameraActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCameraActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCameraActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCameraActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCameraActorElement(UDatasmithCameraActorElement&&); \
	NO_API UDatasmithCameraActorElement(const UDatasmithCameraActorElement&); \
public: \
	NO_API virtual ~UDatasmithCameraActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCameraActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCameraActorElement(UDatasmithCameraActorElement&&); \
	NO_API UDatasmithCameraActorElement(const UDatasmithCameraActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCameraActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCameraActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCameraActorElement) \
	NO_API virtual ~UDatasmithCameraActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_404_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_407_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithCameraActorElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execAddProperty); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount); \
	DECLARE_FUNCTION(execSetClassOrPathName); \
	DECLARE_FUNCTION(execGetClassOrPathName);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveProperty); \
	DECLARE_FUNCTION(execAddProperty); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount); \
	DECLARE_FUNCTION(execSetClassOrPathName); \
	DECLARE_FUNCTION(execGetClassOrPathName);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithCustomActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCustomActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCustomActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCustomActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithCustomActorElement(); \
	friend struct Z_Construct_UClass_UDatasmithCustomActorElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithCustomActorElement, UDatasmithActorElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithCustomActorElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCustomActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCustomActorElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCustomActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCustomActorElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCustomActorElement(UDatasmithCustomActorElement&&); \
	NO_API UDatasmithCustomActorElement(const UDatasmithCustomActorElement&); \
public: \
	NO_API virtual ~UDatasmithCustomActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithCustomActorElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithCustomActorElement(UDatasmithCustomActorElement&&); \
	NO_API UDatasmithCustomActorElement(const UDatasmithCustomActorElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithCustomActorElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithCustomActorElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithCustomActorElement) \
	NO_API virtual ~UDatasmithCustomActorElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_487_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_490_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithCustomActorElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_RPC_WRAPPERS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithBaseMaterialElement(); \
	friend struct Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBaseMaterialElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBaseMaterialElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithBaseMaterialElement(); \
	friend struct Z_Construct_UClass_UDatasmithBaseMaterialElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBaseMaterialElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBaseMaterialElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBaseMaterialElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBaseMaterialElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBaseMaterialElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBaseMaterialElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBaseMaterialElement(UDatasmithBaseMaterialElement&&); \
	NO_API UDatasmithBaseMaterialElement(const UDatasmithBaseMaterialElement&); \
public: \
	NO_API virtual ~UDatasmithBaseMaterialElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBaseMaterialElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBaseMaterialElement(UDatasmithBaseMaterialElement&&); \
	NO_API UDatasmithBaseMaterialElement(const UDatasmithBaseMaterialElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBaseMaterialElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBaseMaterialElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBaseMaterialElement) \
	NO_API virtual ~UDatasmithBaseMaterialElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_543_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_546_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithBaseMaterialElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetId);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetId);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMaterialIDElement(); \
	friend struct Z_Construct_UClass_UDatasmithMaterialIDElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMaterialIDElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMaterialIDElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMaterialIDElement(); \
	friend struct Z_Construct_UClass_UDatasmithMaterialIDElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMaterialIDElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMaterialIDElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMaterialIDElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMaterialIDElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMaterialIDElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMaterialIDElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMaterialIDElement(UDatasmithMaterialIDElement&&); \
	NO_API UDatasmithMaterialIDElement(const UDatasmithMaterialIDElement&); \
public: \
	NO_API virtual ~UDatasmithMaterialIDElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMaterialIDElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMaterialIDElement(UDatasmithMaterialIDElement&&); \
	NO_API UDatasmithMaterialIDElement(const UDatasmithMaterialIDElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMaterialIDElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMaterialIDElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMaterialIDElement) \
	NO_API virtual ~UDatasmithMaterialIDElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_565_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_568_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMaterialIDElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCameraShutterSpeed); \
	DECLARE_FUNCTION(execGetCameraShutterSpeed); \
	DECLARE_FUNCTION(execSetCameraISO); \
	DECLARE_FUNCTION(execGetCameraISO); \
	DECLARE_FUNCTION(execSetSaturation); \
	DECLARE_FUNCTION(execGetSaturation); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execSetDof); \
	DECLARE_FUNCTION(execGetDof); \
	DECLARE_FUNCTION(execSetVignette); \
	DECLARE_FUNCTION(execGetVignette); \
	DECLARE_FUNCTION(execSetColorFilter); \
	DECLARE_FUNCTION(execGetColorFilter); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCameraShutterSpeed); \
	DECLARE_FUNCTION(execGetCameraShutterSpeed); \
	DECLARE_FUNCTION(execSetCameraISO); \
	DECLARE_FUNCTION(execGetCameraISO); \
	DECLARE_FUNCTION(execSetSaturation); \
	DECLARE_FUNCTION(execGetSaturation); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execSetDof); \
	DECLARE_FUNCTION(execGetDof); \
	DECLARE_FUNCTION(execSetVignette); \
	DECLARE_FUNCTION(execGetVignette); \
	DECLARE_FUNCTION(execSetColorFilter); \
	DECLARE_FUNCTION(execGetColorFilter); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execGetTemperature);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithPostProcessElement(); \
	friend struct Z_Construct_UClass_UDatasmithPostProcessElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPostProcessElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPostProcessElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithPostProcessElement(); \
	friend struct Z_Construct_UClass_UDatasmithPostProcessElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPostProcessElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPostProcessElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPostProcessElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPostProcessElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPostProcessElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPostProcessElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPostProcessElement(UDatasmithPostProcessElement&&); \
	NO_API UDatasmithPostProcessElement(const UDatasmithPostProcessElement&); \
public: \
	NO_API virtual ~UDatasmithPostProcessElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPostProcessElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPostProcessElement(UDatasmithPostProcessElement&&); \
	NO_API UDatasmithPostProcessElement(const UDatasmithPostProcessElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPostProcessElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPostProcessElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPostProcessElement) \
	NO_API virtual ~UDatasmithPostProcessElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_592_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_595_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithPostProcessElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColorSpace); \
	DECLARE_FUNCTION(execGetColorSpace); \
	DECLARE_FUNCTION(execSetRGBCurve); \
	DECLARE_FUNCTION(execGetRGBCurve); \
	DECLARE_FUNCTION(execSetAllowResize); \
	DECLARE_FUNCTION(execGetAllowResize); \
	DECLARE_FUNCTION(execSetTextureMode); \
	DECLARE_FUNCTION(execGetTextureMode); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execGetFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColorSpace); \
	DECLARE_FUNCTION(execGetColorSpace); \
	DECLARE_FUNCTION(execSetRGBCurve); \
	DECLARE_FUNCTION(execGetRGBCurve); \
	DECLARE_FUNCTION(execSetAllowResize); \
	DECLARE_FUNCTION(execGetAllowResize); \
	DECLARE_FUNCTION(execSetTextureMode); \
	DECLARE_FUNCTION(execGetTextureMode); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execGetFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithTextureElement(); \
	friend struct Z_Construct_UClass_UDatasmithTextureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithTextureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithTextureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithTextureElement(); \
	friend struct Z_Construct_UClass_UDatasmithTextureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithTextureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithTextureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithTextureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithTextureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithTextureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithTextureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithTextureElement(UDatasmithTextureElement&&); \
	NO_API UDatasmithTextureElement(const UDatasmithTextureElement&); \
public: \
	NO_API virtual ~UDatasmithTextureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithTextureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithTextureElement(UDatasmithTextureElement&&); \
	NO_API UDatasmithTextureElement(const UDatasmithTextureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithTextureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithTextureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithTextureElement) \
	NO_API virtual ~UDatasmithTextureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_680_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_683_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithTextureElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execGetAssociatedElement); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execGetAssociatedElement); \
	DECLARE_FUNCTION(execGetPropertyByName); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execGetPropertiesCount);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMetaDataElement(); \
	friend struct Z_Construct_UClass_UDatasmithMetaDataElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMetaDataElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMetaDataElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithMetaDataElement(); \
	friend struct Z_Construct_UClass_UDatasmithMetaDataElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithMetaDataElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithMetaDataElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMetaDataElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMetaDataElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMetaDataElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMetaDataElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMetaDataElement(UDatasmithMetaDataElement&&); \
	NO_API UDatasmithMetaDataElement(const UDatasmithMetaDataElement&); \
public: \
	NO_API virtual ~UDatasmithMetaDataElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMetaDataElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithMetaDataElement(UDatasmithMetaDataElement&&); \
	NO_API UDatasmithMetaDataElement(const UDatasmithMetaDataElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMetaDataElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMetaDataElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMetaDataElement) \
	NO_API virtual ~UDatasmithMetaDataElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_743_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_746_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithMetaDataElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execSetPropertyPath);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execSetPropertyPath);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithBasePropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBasePropertyCaptureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBasePropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithBasePropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithBasePropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithBasePropertyCaptureElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithBasePropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBasePropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBasePropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBasePropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBasePropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBasePropertyCaptureElement(UDatasmithBasePropertyCaptureElement&&); \
	NO_API UDatasmithBasePropertyCaptureElement(const UDatasmithBasePropertyCaptureElement&); \
public: \
	NO_API virtual ~UDatasmithBasePropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithBasePropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithBasePropertyCaptureElement(UDatasmithBasePropertyCaptureElement&&); \
	NO_API UDatasmithBasePropertyCaptureElement(const UDatasmithBasePropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithBasePropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithBasePropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithBasePropertyCaptureElement) \
	NO_API virtual ~UDatasmithBasePropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_790_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_793_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithBasePropertyCaptureElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueBool);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueIntPoint); \
	DECLARE_FUNCTION(execGetValueIntPoint); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector4); \
	DECLARE_FUNCTION(execGetValueVector4); \
	DECLARE_FUNCTION(execSetValueQuat); \
	DECLARE_FUNCTION(execGetValueQuat); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execSetValueInt); \
	DECLARE_FUNCTION(execGetValueInt); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetValueBool);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithPropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPropertyCaptureElement(UDatasmithPropertyCaptureElement&&); \
	NO_API UDatasmithPropertyCaptureElement(const UDatasmithPropertyCaptureElement&); \
public: \
	NO_API virtual ~UDatasmithPropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithPropertyCaptureElement(UDatasmithPropertyCaptureElement&&); \
	NO_API UDatasmithPropertyCaptureElement(const UDatasmithPropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithPropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithPropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithPropertyCaptureElement) \
	NO_API virtual ~UDatasmithPropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_826_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_829_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithPropertyCaptureElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRecordedObject); \
	DECLARE_FUNCTION(execSetRecordedObject);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRecordedObject); \
	DECLARE_FUNCTION(execSetRecordedObject);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithObjectPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectPropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithObjectPropertyCaptureElement(); \
	friend struct Z_Construct_UClass_UDatasmithObjectPropertyCaptureElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithObjectPropertyCaptureElement, UDatasmithBasePropertyCaptureElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithObjectPropertyCaptureElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectPropertyCaptureElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectPropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectPropertyCaptureElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectPropertyCaptureElement(UDatasmithObjectPropertyCaptureElement&&); \
	NO_API UDatasmithObjectPropertyCaptureElement(const UDatasmithObjectPropertyCaptureElement&); \
public: \
	NO_API virtual ~UDatasmithObjectPropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithObjectPropertyCaptureElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithObjectPropertyCaptureElement(UDatasmithObjectPropertyCaptureElement&&); \
	NO_API UDatasmithObjectPropertyCaptureElement(const UDatasmithObjectPropertyCaptureElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithObjectPropertyCaptureElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithObjectPropertyCaptureElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithObjectPropertyCaptureElement) \
	NO_API virtual ~UDatasmithObjectPropertyCaptureElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_972_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_975_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithObjectPropertyCaptureElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapturesCount); \
	DECLARE_FUNCTION(execAddPropertyCapture); \
	DECLARE_FUNCTION(execCreateObjectPropertyCapture); \
	DECLARE_FUNCTION(execCreatePropertyCapture); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execSetActor);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapture); \
	DECLARE_FUNCTION(execGetPropertyCapturesCount); \
	DECLARE_FUNCTION(execAddPropertyCapture); \
	DECLARE_FUNCTION(execCreateObjectPropertyCapture); \
	DECLARE_FUNCTION(execCreatePropertyCapture); \
	DECLARE_FUNCTION(execGetActor); \
	DECLARE_FUNCTION(execSetActor);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithActorBindingElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorBindingElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorBindingElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorBindingElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithActorBindingElement(); \
	friend struct Z_Construct_UClass_UDatasmithActorBindingElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithActorBindingElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithActorBindingElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorBindingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorBindingElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorBindingElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorBindingElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorBindingElement(UDatasmithActorBindingElement&&); \
	NO_API UDatasmithActorBindingElement(const UDatasmithActorBindingElement&); \
public: \
	NO_API virtual ~UDatasmithActorBindingElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithActorBindingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithActorBindingElement(UDatasmithActorBindingElement&&); \
	NO_API UDatasmithActorBindingElement(const UDatasmithActorBindingElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithActorBindingElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithActorBindingElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithActorBindingElement) \
	NO_API virtual ~UDatasmithActorBindingElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_994_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_997_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithActorBindingElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execGetActorBinding); \
	DECLARE_FUNCTION(execGetActorBindingsCount); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execCreateActorBinding);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveActorBinding); \
	DECLARE_FUNCTION(execGetActorBinding); \
	DECLARE_FUNCTION(execGetActorBindingsCount); \
	DECLARE_FUNCTION(execAddActorBinding); \
	DECLARE_FUNCTION(execCreateActorBinding);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithVariantElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithVariantElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantElement(UDatasmithVariantElement&&); \
	NO_API UDatasmithVariantElement(const UDatasmithVariantElement&); \
public: \
	NO_API virtual ~UDatasmithVariantElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantElement(UDatasmithVariantElement&&); \
	NO_API UDatasmithVariantElement(const UDatasmithVariantElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantElement) \
	NO_API virtual ~UDatasmithVariantElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1049_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1052_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithVariantElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetVariantsCount); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execCreateVariant);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveVariant); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetVariantsCount); \
	DECLARE_FUNCTION(execAddVariant); \
	DECLARE_FUNCTION(execCreateVariant);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithVariantSetElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantSetElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantSetElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantSetElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithVariantSetElement(); \
	friend struct Z_Construct_UClass_UDatasmithVariantSetElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithVariantSetElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithVariantSetElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantSetElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantSetElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantSetElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantSetElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantSetElement(UDatasmithVariantSetElement&&); \
	NO_API UDatasmithVariantSetElement(const UDatasmithVariantSetElement&); \
public: \
	NO_API virtual ~UDatasmithVariantSetElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithVariantSetElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithVariantSetElement(UDatasmithVariantSetElement&&); \
	NO_API UDatasmithVariantSetElement(const UDatasmithVariantSetElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithVariantSetElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithVariantSetElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithVariantSetElement) \
	NO_API virtual ~UDatasmithVariantSetElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1092_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1095_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithVariantSetElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetVariantSet); \
	DECLARE_FUNCTION(execGetVariantSetsCount); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execCreateVariantSet);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveVariantSet); \
	DECLARE_FUNCTION(execGetVariantSet); \
	DECLARE_FUNCTION(execGetVariantSetsCount); \
	DECLARE_FUNCTION(execAddVariantSet); \
	DECLARE_FUNCTION(execCreateVariantSet);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithLevelVariantSetsElement(); \
	friend struct Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLevelVariantSetsElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLevelVariantSetsElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithLevelVariantSetsElement(); \
	friend struct Z_Construct_UClass_UDatasmithLevelVariantSetsElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithLevelVariantSetsElement, UDatasmithObjectElement, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithLevelVariantSetsElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLevelVariantSetsElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLevelVariantSetsElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLevelVariantSetsElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLevelVariantSetsElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLevelVariantSetsElement(UDatasmithLevelVariantSetsElement&&); \
	NO_API UDatasmithLevelVariantSetsElement(const UDatasmithLevelVariantSetsElement&); \
public: \
	NO_API virtual ~UDatasmithLevelVariantSetsElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithLevelVariantSetsElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithLevelVariantSetsElement(UDatasmithLevelVariantSetsElement&&); \
	NO_API UDatasmithLevelVariantSetsElement(const UDatasmithLevelVariantSetsElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithLevelVariantSetsElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithLevelVariantSetsElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithLevelVariantSetsElement) \
	NO_API virtual ~UDatasmithLevelVariantSetsElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1135_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h_1138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithLevelVariantSetsElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUObjectElements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
