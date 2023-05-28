// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenCVBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
enum class EOpenCVArucoDictionary : uint8;
enum class EOpenCVArucoDictionarySize : uint8;
struct FOpenCVArucoDetectedMarker;
struct FOpenCVLensDistortionParametersBase;
#ifdef OPENCVHELPER_OpenCVBlueprintFunctionLibrary_generated_h
#error "OpenCVBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OpenCVBlueprintFunctionLibrary.h"
#endif
#define OPENCVHELPER_OpenCVBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics; \
	OPENCVHELPER_API static class UScriptStruct* StaticStruct();


template<> OPENCVHELPER_API UScriptStruct* StaticStruct<struct FOpenCVArucoDetectedMarker>();

#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenCVArucoDetectMarkers); \
	DECLARE_FUNCTION(execOpenCVChessboardDetectCorners);


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenCVArucoDetectMarkers); \
	DECLARE_FUNCTION(execOpenCVChessboardDetectCorners);


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_ACCESSORS
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenCVBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenCVBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVHelper"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUOpenCVBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenCVBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenCVHelper"), NO_API) \
	DECLARE_SERIALIZER(UOpenCVBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenCVBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVBlueprintFunctionLibrary(UOpenCVBlueprintFunctionLibrary&&); \
	NO_API UOpenCVBlueprintFunctionLibrary(const UOpenCVBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UOpenCVBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenCVBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenCVBlueprintFunctionLibrary(UOpenCVBlueprintFunctionLibrary&&); \
	NO_API UOpenCVBlueprintFunctionLibrary(const UOpenCVBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenCVBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenCVBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenCVBlueprintFunctionLibrary) \
	NO_API virtual ~UOpenCVBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_55_PROLOG
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_ACCESSORS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_INCLASS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_ACCESSORS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCVHELPER_API UClass* StaticClass<class UOpenCVBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EOPENCVARUCODICTIONARY(op) \
	op(EOpenCVArucoDictionary::Dict4x4) \
	op(EOpenCVArucoDictionary::Dict5x5) \
	op(EOpenCVArucoDictionary::Dict6x6) \
	op(EOpenCVArucoDictionary::Dict7x7) \
	op(EOpenCVArucoDictionary::DictOriginal) 

enum class EOpenCVArucoDictionary : uint8;
template<> struct TIsUEnumClass<EOpenCVArucoDictionary> { enum { Value = true }; };
template<> OPENCVHELPER_API UEnum* StaticEnum<EOpenCVArucoDictionary>();

#define FOREACH_ENUM_EOPENCVARUCODICTIONARYSIZE(op) \
	op(EOpenCVArucoDictionarySize::DictSize50) \
	op(EOpenCVArucoDictionarySize::DictSize100) \
	op(EOpenCVArucoDictionarySize::DictSize250) \
	op(EOpenCVArucoDictionarySize::DictSize1000) 

enum class EOpenCVArucoDictionarySize : uint8;
template<> struct TIsUEnumClass<EOpenCVArucoDictionarySize> { enum { Value = true }; };
template<> OPENCVHELPER_API UEnum* StaticEnum<EOpenCVArucoDictionarySize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
