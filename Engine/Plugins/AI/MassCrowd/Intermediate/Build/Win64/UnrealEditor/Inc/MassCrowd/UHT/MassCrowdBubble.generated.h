// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassCrowdBubble.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSCROWD_MassCrowdBubble_generated_h
#error "MassCrowdBubble.generated.h already included, missing '#pragma once' in MassCrowdBubble.h"
#endif
#define MASSCROWD_MassCrowdBubble_generated_h

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassCrowdClientBubbleSerializer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassClientBubbleSerializerBase Super; \
	UE_NET_DECLARE_FASTARRAY(FMassCrowdClientBubbleSerializer, Crowd, );


template<> MASSCROWD_API UScriptStruct* StaticStruct<struct FMassCrowdClientBubbleSerializer>();

#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_SPARSE_DATA
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_RPC_WRAPPERS
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_ACCESSORS
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassCrowdClientBubbleInfo(); \
	friend struct Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics; \
public: \
	DECLARE_CLASS(AMassCrowdClientBubbleInfo, AMassClientBubbleInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), NO_API) \
	DECLARE_SERIALIZER(AMassCrowdClientBubbleInfo) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrowdSerializer=NETFIELD_REP_START, \
		NETFIELD_REP_END=CrowdSerializer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_INCLASS \
private: \
	static void StaticRegisterNativesAMassCrowdClientBubbleInfo(); \
	friend struct Z_Construct_UClass_AMassCrowdClientBubbleInfo_Statics; \
public: \
	DECLARE_CLASS(AMassCrowdClientBubbleInfo, AMassClientBubbleInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassCrowd"), NO_API) \
	DECLARE_SERIALIZER(AMassCrowdClientBubbleInfo) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CrowdSerializer=NETFIELD_REP_START, \
		NETFIELD_REP_END=CrowdSerializer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMassCrowdClientBubbleInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassCrowdClientBubbleInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassCrowdClientBubbleInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassCrowdClientBubbleInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassCrowdClientBubbleInfo(AMassCrowdClientBubbleInfo&&); \
	NO_API AMassCrowdClientBubbleInfo(const AMassCrowdClientBubbleInfo&); \
public: \
	NO_API virtual ~AMassCrowdClientBubbleInfo();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassCrowdClientBubbleInfo(AMassCrowdClientBubbleInfo&&); \
	NO_API AMassCrowdClientBubbleInfo(const AMassCrowdClientBubbleInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassCrowdClientBubbleInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassCrowdClientBubbleInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassCrowdClientBubbleInfo) \
	NO_API virtual ~AMassCrowdClientBubbleInfo();


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_95_PROLOG
#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_SPARSE_DATA \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_RPC_WRAPPERS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_ACCESSORS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_INCLASS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_SPARSE_DATA \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_ACCESSORS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSCROWD_API UClass* StaticClass<class AMassCrowdClientBubbleInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdBubble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
