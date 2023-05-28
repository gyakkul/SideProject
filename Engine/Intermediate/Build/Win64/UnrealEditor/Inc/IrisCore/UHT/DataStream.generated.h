// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/DataStream/DataStream.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_DataStream_generated_h
#error "DataStream.generated.h already included, missing '#pragma once' in DataStream.h"
#endif
#define IRISCORE_DataStream_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataStream(); \
	friend struct Z_Construct_UClass_UDataStream_Statics; \
public: \
	DECLARE_CLASS(UDataStream, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UDataStream)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUDataStream(); \
	friend struct Z_Construct_UClass_UDataStream_Statics; \
public: \
	DECLARE_CLASS(UDataStream, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UDataStream)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UDataStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStream) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStream); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IRISCORE_API UDataStream(UDataStream&&); \
	IRISCORE_API UDataStream(const UDataStream&); \
public:


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UDataStream(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IRISCORE_API UDataStream(UDataStream&&); \
	IRISCORE_API UDataStream(const UDataStream&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UDataStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStream); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStream)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_40_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UDataStream>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_DataStream_DataStream_h


#define FOREACH_ENUM_EDATASTREAMSENDSTATUS(op) \
	op(EDataStreamSendStatus::Send) \
	op(EDataStreamSendStatus::Pause) 

enum class EDataStreamSendStatus : uint8;
template<> struct TIsUEnumClass<EDataStreamSendStatus> { enum { Value = true }; };
template<> IRISCORE_API UEnum* StaticEnum<EDataStreamSendStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
