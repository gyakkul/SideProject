// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSourceFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SOURCEFILTERINGTRACE_DataSourceFilter_generated_h
#error "DataSourceFilter.generated.h already included, missing '#pragma once' in DataSourceFilter.h"
#endif
#define SOURCEFILTERINGTRACE_DataSourceFilter_generated_h

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_RPC_WRAPPERS \
	virtual bool DoesActorPassFilter_Implementation(const AActor* InActor) const; \
 \
	DECLARE_FUNCTION(execDoesActorPassFilter);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoesActorPassFilter);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_ACCESSORS
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSourceFilter(); \
	friend struct Z_Construct_UClass_UDataSourceFilter_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilter) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilter*>(this); }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDataSourceFilter(); \
	friend struct Z_Construct_UClass_UDataSourceFilter_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilter) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilter*>(this); }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilter(UDataSourceFilter&&); \
	NO_API UDataSourceFilter(const UDataSourceFilter&); \
public:


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilter(UDataSourceFilter&&); \
	NO_API UDataSourceFilter(const UDataSourceFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataSourceFilter)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_9_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_ACCESSORS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_INCLASS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_ACCESSORS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<class UDataSourceFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
