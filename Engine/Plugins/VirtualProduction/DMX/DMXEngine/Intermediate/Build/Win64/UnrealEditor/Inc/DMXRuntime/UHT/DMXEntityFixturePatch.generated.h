// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntityFixturePatch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
struct FDMXAttributeName;
struct FDMXAttributeName; 
struct FDMXAttributeName; enum class EDMXFixtureSignalFormat : uint8;
struct FDMXAttributeName; struct FDMXFixtureFunction;
struct FDMXCell;
struct FDMXEntityFixturePatchConstructionParams;
struct FDMXEntityFixturePatchRef;
struct FDMXFixtureMatrix;
struct FDMXNormalizedAttributeValueMap;
#ifdef DMXRUNTIME_DMXEntityFixturePatch_generated_h
#error "DMXEntityFixturePatch.generated.h already included, missing '#pragma once' in DMXEntityFixturePatch.h"
#endif
#define DMXRUNTIME_DMXEntityFixturePatch_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchConstructionParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXEntityFixturePatchConstructionParams>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_73_DELEGATE \
static void FDMXOnFixturePatchReceivedDMXDelegate_DelegateWrapper(const FMulticastScriptDelegate& DMXOnFixturePatchReceivedDMXDelegate, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsoluteWithValidation); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetNormalizedMatrixCellValues); \
	DECLARE_FUNCTION(execGetMatrixCellValues); \
	DECLARE_FUNCTION(execSendNormalizedMatrixCellValue); \
	DECLARE_FUNCTION(execSendMatrixCellValueWithAttributeMap); \
	DECLARE_FUNCTION(execSendMatrixCellValue); \
	DECLARE_FUNCTION(execGetNormalizedAttributesValues); \
	DECLARE_FUNCTION(execGetAttributesValues); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execIsInControllersRange); \
	DECLARE_FUNCTION(execIsInControllerRange); \
	DECLARE_FUNCTION(execGetRelevantControllers); \
	DECLARE_FUNCTION(execConvertToValidMap); \
	DECLARE_FUNCTION(execContainsAttribute); \
	DECLARE_FUNCTION(execIsMapValid); \
	DECLARE_FUNCTION(execConvertAttributeMapToRawMap); \
	DECLARE_FUNCTION(execConvertRawMapToAttributeMap); \
	DECLARE_FUNCTION(execGetAttributeSignalFormats); \
	DECLARE_FUNCTION(execGetAttributeChannelAssignments); \
	DECLARE_FUNCTION(execGetAttributeDefaultMap); \
	DECLARE_FUNCTION(execGetAttributeFunctionsMap); \
	DECLARE_FUNCTION(execGetAllAttributesInActiveMode); \
	DECLARE_FUNCTION(execGetEndingChannel); \
	DECLARE_FUNCTION(execGetChannelSpan); \
	DECLARE_FUNCTION(execGetStartingChannel); \
	DECLARE_FUNCTION(execSetStartingChannel); \
	DECLARE_FUNCTION(execSetFixtureType); \
	DECLARE_FUNCTION(execSendDMX); \
	DECLARE_FUNCTION(execRemoveFixturePatchFromLibrary); \
	DECLARE_FUNCTION(execCreateFixturePatchInLibrary);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsoluteWithValidation); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetNormalizedMatrixCellValues); \
	DECLARE_FUNCTION(execGetMatrixCellValues); \
	DECLARE_FUNCTION(execSendNormalizedMatrixCellValue); \
	DECLARE_FUNCTION(execSendMatrixCellValueWithAttributeMap); \
	DECLARE_FUNCTION(execSendMatrixCellValue); \
	DECLARE_FUNCTION(execGetNormalizedAttributesValues); \
	DECLARE_FUNCTION(execGetAttributesValues); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execIsInControllersRange); \
	DECLARE_FUNCTION(execIsInControllerRange); \
	DECLARE_FUNCTION(execGetRelevantControllers); \
	DECLARE_FUNCTION(execConvertToValidMap); \
	DECLARE_FUNCTION(execContainsAttribute); \
	DECLARE_FUNCTION(execIsMapValid); \
	DECLARE_FUNCTION(execConvertAttributeMapToRawMap); \
	DECLARE_FUNCTION(execConvertRawMapToAttributeMap); \
	DECLARE_FUNCTION(execGetAttributeSignalFormats); \
	DECLARE_FUNCTION(execGetAttributeChannelAssignments); \
	DECLARE_FUNCTION(execGetAttributeDefaultMap); \
	DECLARE_FUNCTION(execGetAttributeFunctionsMap); \
	DECLARE_FUNCTION(execGetAllAttributesInActiveMode); \
	DECLARE_FUNCTION(execGetEndingChannel); \
	DECLARE_FUNCTION(execGetChannelSpan); \
	DECLARE_FUNCTION(execGetStartingChannel); \
	DECLARE_FUNCTION(execSetStartingChannel); \
	DECLARE_FUNCTION(execSetFixtureType); \
	DECLARE_FUNCTION(execSendDMX); \
	DECLARE_FUNCTION(execRemoveFixturePatchFromLibrary); \
	DECLARE_FUNCTION(execCreateFixturePatchInLibrary);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemoteUniverse);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemoteUniverse);


#else
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXEntityFixturePatch, NO_API)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntityFixturePatch(); \
	friend struct Z_Construct_UClass_UDMXEntityFixturePatch_Statics; \
public: \
	DECLARE_CLASS(UDMXEntityFixturePatch, UDMXEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXEntityFixturePatch) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUDMXEntityFixturePatch(); \
	friend struct Z_Construct_UClass_UDMXEntityFixturePatch_Statics; \
public: \
	DECLARE_CLASS(UDMXEntityFixturePatch, UDMXEntity, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXEntityFixturePatch) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXEntityFixturePatch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXEntityFixturePatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityFixturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityFixturePatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXEntityFixturePatch(UDMXEntityFixturePatch&&); \
	NO_API UDMXEntityFixturePatch(const UDMXEntityFixturePatch&); \
public: \
	NO_API virtual ~UDMXEntityFixturePatch();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXEntityFixturePatch(UDMXEntityFixturePatch&&); \
	NO_API UDMXEntityFixturePatch(const UDMXEntityFixturePatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityFixturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityFixturePatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXEntityFixturePatch) \
	NO_API virtual ~UDMXEntityFixturePatch();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_66_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UDMXEntityFixturePatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityFixturePatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
