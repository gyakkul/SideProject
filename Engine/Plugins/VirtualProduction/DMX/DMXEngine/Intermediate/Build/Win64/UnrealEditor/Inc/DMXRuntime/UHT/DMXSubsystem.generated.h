// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
class UDMXLibrary;
class UDMXSubsystem;
enum class EDMXFixtureSignalFormat : uint8;
enum class EDMXPixelMappingDistribution : uint8;
enum class EDMXSendResult : uint8;
struct FAssetData;
struct FDMXAttributeName;
struct FDMXAttributeName; 
struct FDMXCell;
struct FDMXEntityFixturePatchRef;
struct FDMXEntityFixtureTypeRef;
struct FDMXFixtureCategory;
struct FDMXFixtureMatrix;
struct FDMXInputPortReference;
struct FDMXOutputPortReference;
struct FDMXProtocolName;
#ifdef DMXRUNTIME_DMXSubsystem_generated_h
#error "DMXSubsystem.generated.h already included, missing '#pragma once' in DMXSubsystem.h"
#endif
#define DMXRUNTIME_DMXSubsystem_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_22_DELEGATE \
DMXRUNTIME_API void FProtocolReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProtocolReceivedDelegate, FDMXProtocolName Protocol, int32 RemoteUniverse, TArray<uint8> const& DMXBuffer);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPixelMappingDistributionSort); \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetMatrixCellValue); \
	DECLARE_FUNCTION(execSetMatrixCellValue); \
	DECLARE_FUNCTION(execGetAttributeLabel); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Pure); \
	DECLARE_FUNCTION(execPatchIsOfSelectedType); \
	DECLARE_FUNCTION(execGetFunctionsValue); \
	DECLARE_FUNCTION(execGetFunctionsMapForPatch); \
	DECLARE_FUNCTION(execGetFunctionsMap); \
	DECLARE_FUNCTION(execGetFixturePatch); \
	DECLARE_FUNCTION(execGetFixtureType); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execIntToNormalizedValue); \
	DECLARE_FUNCTION(execIntValueToBytes); \
	DECLARE_FUNCTION(execNormalizedValueToBytes); \
	DECLARE_FUNCTION(execBytesToNormalizedValue); \
	DECLARE_FUNCTION(execBytesToInt); \
	DECLARE_FUNCTION(execGetAllDMXLibraries); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetAllControllersInLibrary); \
	DECLARE_FUNCTION(execGetAllUniversesInController); \
	DECLARE_FUNCTION(execGetFixtureTypeByName); \
	DECLARE_FUNCTION(execGetAllFixtureTypesInLibrary); \
	DECLARE_FUNCTION(execGetFixtureByName); \
	DECLARE_FUNCTION(execGetAllFixturesInLibrary); \
	DECLARE_FUNCTION(execGetAllFixturesWithTag); \
	DECLARE_FUNCTION(execGetFixtureAttributes); \
	DECLARE_FUNCTION(execGetAllFixturesInUniverse); \
	DECLARE_FUNCTION(execGetAllFixturesOfCategory); \
	DECLARE_FUNCTION(execGetAllFixturesOfType); \
	DECLARE_FUNCTION(execGetDMXDataFromOutputPort); \
	DECLARE_FUNCTION(execGetDMXDataFromInputPort); \
	DECLARE_FUNCTION(execGetRawBuffer); \
	DECLARE_FUNCTION(execSendDMXToOutputPort); \
	DECLARE_FUNCTION(execSendDMXRaw); \
	DECLARE_FUNCTION(execSendDMX);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPixelMappingDistributionSort); \
	DECLARE_FUNCTION(execGetAllMatrixCells); \
	DECLARE_FUNCTION(execGetMatrixCell); \
	DECLARE_FUNCTION(execGetCellAttributes); \
	DECLARE_FUNCTION(execGetMatrixProperties); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsAbsolute); \
	DECLARE_FUNCTION(execGetMatrixCellChannelsRelative); \
	DECLARE_FUNCTION(execGetMatrixCellValue); \
	DECLARE_FUNCTION(execSetMatrixCellValue); \
	DECLARE_FUNCTION(execGetAttributeLabel); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXSubsystem_Pure); \
	DECLARE_FUNCTION(execPatchIsOfSelectedType); \
	DECLARE_FUNCTION(execGetFunctionsValue); \
	DECLARE_FUNCTION(execGetFunctionsMapForPatch); \
	DECLARE_FUNCTION(execGetFunctionsMap); \
	DECLARE_FUNCTION(execGetFixturePatch); \
	DECLARE_FUNCTION(execGetFixtureType); \
	DECLARE_FUNCTION(execGetNormalizedAttributeValue); \
	DECLARE_FUNCTION(execIntToNormalizedValue); \
	DECLARE_FUNCTION(execIntValueToBytes); \
	DECLARE_FUNCTION(execNormalizedValueToBytes); \
	DECLARE_FUNCTION(execBytesToNormalizedValue); \
	DECLARE_FUNCTION(execBytesToInt); \
	DECLARE_FUNCTION(execGetAllDMXLibraries); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetAllControllersInLibrary); \
	DECLARE_FUNCTION(execGetAllUniversesInController); \
	DECLARE_FUNCTION(execGetFixtureTypeByName); \
	DECLARE_FUNCTION(execGetAllFixtureTypesInLibrary); \
	DECLARE_FUNCTION(execGetFixtureByName); \
	DECLARE_FUNCTION(execGetAllFixturesInLibrary); \
	DECLARE_FUNCTION(execGetAllFixturesWithTag); \
	DECLARE_FUNCTION(execGetFixtureAttributes); \
	DECLARE_FUNCTION(execGetAllFixturesInUniverse); \
	DECLARE_FUNCTION(execGetAllFixturesOfCategory); \
	DECLARE_FUNCTION(execGetAllFixturesOfType); \
	DECLARE_FUNCTION(execGetDMXDataFromOutputPort); \
	DECLARE_FUNCTION(execGetDMXDataFromInputPort); \
	DECLARE_FUNCTION(execGetRawBuffer); \
	DECLARE_FUNCTION(execSendDMXToOutputPort); \
	DECLARE_FUNCTION(execSendDMXRaw); \
	DECLARE_FUNCTION(execSendDMX);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAssetRegistryRemovedAsset); \
	DECLARE_FUNCTION(execOnAssetRegistryAddedAsset);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAssetRegistryRemovedAsset); \
	DECLARE_FUNCTION(execOnAssetRegistryAddedAsset);


#else
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXSubsystem(); \
	friend struct Z_Construct_UClass_UDMXSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDMXSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDMXSubsystem(); \
	friend struct Z_Construct_UClass_UDMXSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDMXSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXSubsystem(UDMXSubsystem&&); \
	NO_API UDMXSubsystem(const UDMXSubsystem&); \
public: \
	NO_API virtual ~UDMXSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXSubsystem(UDMXSubsystem&&); \
	NO_API UDMXSubsystem(const UDMXSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXSubsystem) \
	NO_API virtual ~UDMXSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UDMXSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
