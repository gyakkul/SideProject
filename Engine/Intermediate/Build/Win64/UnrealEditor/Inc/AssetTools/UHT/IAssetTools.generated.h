// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAssetTools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAssetTools;
class UAssetImportTask;
class UAutomatedAssetImportData;
class UFactory;
class UObject;
class UPackage;
enum class EAssetRenameResult : uint8;
struct FAssetRenameData;
struct FMigrationOptions;
struct FRevisionInfo;
struct FSoftObjectPath;
struct FSoftObjectPath; struct FSoftObjectPath;
#ifdef ASSETTOOLS_IAssetTools_generated_h
#error "IAssetTools.generated.h already included, missing '#pragma once' in IAssetTools.h"
#endif
#define ASSETTOOLS_IAssetTools_generated_h

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetRenameData_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAssetRenameData>();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_121_DELEGATE \
ASSETTOOLS_API void FAdvancedCopyCompletedEvent_DelegateWrapper(const FScriptDelegate& AdvancedCopyCompletedEvent, bool bSuccess, TArray<FAssetRenameData> const& AllCopiedAssets);


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAdvancedCopyParams>();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMigrationOptions_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FMigrationOptions>();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_SPARSE_DATA
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenEditorForAssets); \
	DECLARE_FUNCTION(execBeginAdvancedCopyPackages); \
	DECLARE_FUNCTION(execMigratePackages); \
	DECLARE_FUNCTION(execDiffAssets); \
	DECLARE_FUNCTION(execDiffAgainstDepot); \
	DECLARE_FUNCTION(execCreateUniqueAssetName); \
	DECLARE_FUNCTION(execExportAssetsWithDialog); \
	DECLARE_FUNCTION(execExportAssets); \
	DECLARE_FUNCTION(execImportAssetTasks); \
	DECLARE_FUNCTION(execImportAssetsAutomated); \
	DECLARE_FUNCTION(execImportAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameReferencingSoftObjectPaths); \
	DECLARE_FUNCTION(execFindSoftReferencesToObject); \
	DECLARE_FUNCTION(execRenameAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameAssets); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialogAndTitle); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAsset);


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenEditorForAssets); \
	DECLARE_FUNCTION(execBeginAdvancedCopyPackages); \
	DECLARE_FUNCTION(execMigratePackages); \
	DECLARE_FUNCTION(execDiffAssets); \
	DECLARE_FUNCTION(execDiffAgainstDepot); \
	DECLARE_FUNCTION(execCreateUniqueAssetName); \
	DECLARE_FUNCTION(execExportAssetsWithDialog); \
	DECLARE_FUNCTION(execExportAssets); \
	DECLARE_FUNCTION(execImportAssetTasks); \
	DECLARE_FUNCTION(execImportAssetsAutomated); \
	DECLARE_FUNCTION(execImportAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameReferencingSoftObjectPaths); \
	DECLARE_FUNCTION(execFindSoftReferencesToObject); \
	DECLARE_FUNCTION(execRenameAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameAssets); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialogAndTitle); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAsset);


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_ACCESSORS
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTOOLS_API UAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETTOOLS_API UAssetTools(UAssetTools&&); \
	ASSETTOOLS_API UAssetTools(const UAssetTools&); \
public: \
	ASSETTOOLS_API virtual ~UAssetTools();


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTOOLS_API UAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETTOOLS_API UAssetTools(UAssetTools&&); \
	ASSETTOOLS_API UAssetTools(const UAssetTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTools); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTools) \
	ASSETTOOLS_API virtual ~UAssetTools();


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetTools(); \
	friend struct Z_Construct_UClass_UAssetTools_Statics; \
public: \
	DECLARE_CLASS(UAssetTools, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetTools"), ASSETTOOLS_API) \
	DECLARE_SERIALIZER(UAssetTools)


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetTools() {} \
public: \
	typedef UAssetTools UClassType; \
	typedef IAssetTools ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetTools() {} \
public: \
	typedef UAssetTools UClassType; \
	typedef IAssetTools ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_232_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_SPARSE_DATA \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_RPC_WRAPPERS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_ACCESSORS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_SPARSE_DATA \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_ACCESSORS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_235_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetTools>();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_SPARSE_DATA
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetTools);


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetTools);


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_ACCESSORS
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsHelpers(); \
	friend struct Z_Construct_UClass_UAssetToolsHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsHelpers)


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_INCLASS \
private: \
	static void StaticRegisterNativesUAssetToolsHelpers(); \
	friend struct Z_Construct_UClass_UAssetToolsHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsHelpers)


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsHelpers(UAssetToolsHelpers&&); \
	NO_API UAssetToolsHelpers(const UAssetToolsHelpers&); \
public: \
	NO_API virtual ~UAssetToolsHelpers();


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsHelpers(UAssetToolsHelpers&&); \
	NO_API UAssetToolsHelpers(const UAssetToolsHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsHelpers) \
	NO_API virtual ~UAssetToolsHelpers();


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_603_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_SPARSE_DATA \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_RPC_WRAPPERS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_ACCESSORS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_INCLASS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_SPARSE_DATA \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_ACCESSORS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_606_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h


#define FOREACH_ENUM_EASSETCLASSACTION(op) \
	op(EAssetClassAction::CreateAsset) \
	op(EAssetClassAction::ViewAsset) \
	op(EAssetClassAction::AllAssetActions) 

enum class EAssetClassAction : uint8;
template<> struct TIsUEnumClass<EAssetClassAction> { enum { Value = true }; };
template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetClassAction>();

#define FOREACH_ENUM_EASSETRENAMERESULT(op) \
	op(EAssetRenameResult::Failure) \
	op(EAssetRenameResult::Success) \
	op(EAssetRenameResult::Pending) 

enum class EAssetRenameResult : uint8;
template<> struct TIsUEnumClass<EAssetRenameResult> { enum { Value = true }; };
template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetRenameResult>();

#define FOREACH_ENUM_EREDIRECTFIXUPMODE(op) \
	op(ERedirectFixupMode::DeleteFixedUpRedirectors) \
	op(ERedirectFixupMode::LeaveFixedUpRedirectors) 

enum class ERedirectFixupMode;
template<> struct TIsUEnumClass<ERedirectFixupMode> { enum { Value = true }; };
template<> ASSETTOOLS_API UEnum* StaticEnum<ERedirectFixupMode>();

#define FOREACH_ENUM_EASSETMIGRATIONCONFLICT(op) \
	op(EAssetMigrationConflict::Skip) \
	op(EAssetMigrationConflict::Overwrite) \
	op(EAssetMigrationConflict::Cancel) 

enum class EAssetMigrationConflict : uint8;
template<> struct TIsUEnumClass<EAssetMigrationConflict> { enum { Value = true }; };
template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetMigrationConflict>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
