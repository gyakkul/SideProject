// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetTextLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FDateTime;
struct FFormatArgumentData;
struct FLinearColor;
struct FPolyglotTextData;
struct FTimespan;
#ifdef ENGINE_KismetTextLibrary_generated_h
#error "KismetTextLibrary.generated.h already included, missing '#pragma once' in KismetTextLibrary.h"
#endif
#define ENGINE_KismetTextLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPolyglotDataToText); \
	DECLARE_FUNCTION(execIsPolyglotDataValid); \
	DECLARE_FUNCTION(execStringTableIdAndKeyFromText); \
	DECLARE_FUNCTION(execTextFromStringTable); \
	DECLARE_FUNCTION(execTextIsFromStringTable); \
	DECLARE_FUNCTION(execFormat); \
	DECLARE_FUNCTION(execAsTimespan_Timespan); \
	DECLARE_FUNCTION(execAsTimeZoneTime_DateTime); \
	DECLARE_FUNCTION(execAsTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDateTime_DateTime); \
	DECLARE_FUNCTION(execAsDateTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDate_DateTime); \
	DECLARE_FUNCTION(execAsDate_DateTime); \
	DECLARE_FUNCTION(execAsPercent_Float); \
	DECLARE_FUNCTION(execAsCurrency_Float); \
	DECLARE_FUNCTION(execAsCurrency_Integer); \
	DECLARE_FUNCTION(execAsCurrencyBase); \
	DECLARE_FUNCTION(execConv_DoubleToText); \
	DECLARE_FUNCTION(execConv_Int64ToText); \
	DECLARE_FUNCTION(execConv_IntToText); \
	DECLARE_FUNCTION(execConv_ByteToText); \
	DECLARE_FUNCTION(execConv_BoolToText); \
	DECLARE_FUNCTION(execNotEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execNotEqual_TextText); \
	DECLARE_FUNCTION(execEqualEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execEqualEqual_TextText); \
	DECLARE_FUNCTION(execFindTextInLocalizationTable); \
	DECLARE_FUNCTION(execGetEmptyText); \
	DECLARE_FUNCTION(execTextTrimPrecedingAndTrailing); \
	DECLARE_FUNCTION(execTextTrimTrailing); \
	DECLARE_FUNCTION(execTextTrimPreceding); \
	DECLARE_FUNCTION(execTextToUpper); \
	DECLARE_FUNCTION(execTextToLower); \
	DECLARE_FUNCTION(execTextIsCultureInvariant); \
	DECLARE_FUNCTION(execTextIsTransient); \
	DECLARE_FUNCTION(execTextIsEmpty); \
	DECLARE_FUNCTION(execConv_NameToText); \
	DECLARE_FUNCTION(execConv_StringToText); \
	DECLARE_FUNCTION(execConv_TextToString); \
	DECLARE_FUNCTION(execConv_ColorToText); \
	DECLARE_FUNCTION(execConv_ObjectToText); \
	DECLARE_FUNCTION(execConv_TransformToText); \
	DECLARE_FUNCTION(execConv_RotatorToText); \
	DECLARE_FUNCTION(execConv_Vector2dToText); \
	DECLARE_FUNCTION(execConv_VectorToText);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPolyglotDataToText); \
	DECLARE_FUNCTION(execIsPolyglotDataValid); \
	DECLARE_FUNCTION(execStringTableIdAndKeyFromText); \
	DECLARE_FUNCTION(execTextFromStringTable); \
	DECLARE_FUNCTION(execTextIsFromStringTable); \
	DECLARE_FUNCTION(execFormat); \
	DECLARE_FUNCTION(execAsTimespan_Timespan); \
	DECLARE_FUNCTION(execAsTimeZoneTime_DateTime); \
	DECLARE_FUNCTION(execAsTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDateTime_DateTime); \
	DECLARE_FUNCTION(execAsDateTime_DateTime); \
	DECLARE_FUNCTION(execAsTimeZoneDate_DateTime); \
	DECLARE_FUNCTION(execAsDate_DateTime); \
	DECLARE_FUNCTION(execAsPercent_Float); \
	DECLARE_FUNCTION(execAsCurrency_Float); \
	DECLARE_FUNCTION(execAsCurrency_Integer); \
	DECLARE_FUNCTION(execAsCurrencyBase); \
	DECLARE_FUNCTION(execConv_DoubleToText); \
	DECLARE_FUNCTION(execConv_Int64ToText); \
	DECLARE_FUNCTION(execConv_IntToText); \
	DECLARE_FUNCTION(execConv_ByteToText); \
	DECLARE_FUNCTION(execConv_BoolToText); \
	DECLARE_FUNCTION(execNotEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execNotEqual_TextText); \
	DECLARE_FUNCTION(execEqualEqual_IgnoreCase_TextText); \
	DECLARE_FUNCTION(execEqualEqual_TextText); \
	DECLARE_FUNCTION(execFindTextInLocalizationTable); \
	DECLARE_FUNCTION(execGetEmptyText); \
	DECLARE_FUNCTION(execTextTrimPrecedingAndTrailing); \
	DECLARE_FUNCTION(execTextTrimTrailing); \
	DECLARE_FUNCTION(execTextTrimPreceding); \
	DECLARE_FUNCTION(execTextToUpper); \
	DECLARE_FUNCTION(execTextToLower); \
	DECLARE_FUNCTION(execTextIsCultureInvariant); \
	DECLARE_FUNCTION(execTextIsTransient); \
	DECLARE_FUNCTION(execTextIsEmpty); \
	DECLARE_FUNCTION(execConv_NameToText); \
	DECLARE_FUNCTION(execConv_StringToText); \
	DECLARE_FUNCTION(execConv_TextToString); \
	DECLARE_FUNCTION(execConv_ColorToText); \
	DECLARE_FUNCTION(execConv_ObjectToText); \
	DECLARE_FUNCTION(execConv_TransformToText); \
	DECLARE_FUNCTION(execConv_RotatorToText); \
	DECLARE_FUNCTION(execConv_Vector2dToText); \
	DECLARE_FUNCTION(execConv_VectorToText);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetTextLibrary(); \
	friend struct Z_Construct_UClass_UKismetTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetTextLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUKismetTextLibrary(); \
	friend struct Z_Construct_UClass_UKismetTextLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetTextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetTextLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetTextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetTextLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetTextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetTextLibrary(UKismetTextLibrary&&); \
	NO_API UKismetTextLibrary(const UKismetTextLibrary&); \
public: \
	NO_API virtual ~UKismetTextLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetTextLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetTextLibrary(UKismetTextLibrary&&); \
	NO_API UKismetTextLibrary(const UKismetTextLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetTextLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetTextLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetTextLibrary) \
	NO_API virtual ~UKismetTextLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_87_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_90_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetTextLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetTextLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h


#define FOREACH_ENUM_EROUNDINGMODE(op) \
	op(HalfToEven) \
	op(HalfFromZero) \
	op(HalfToZero) \
	op(FromZero) \
	op(ToZero) \
	op(ToNegativeInfinity) \
	op(ToPositiveInfinity) 

enum ERoundingMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERoundingMode>();

#define FOREACH_ENUM_ETEXTGENDER(op) \
	op(ETextGender::Masculine) \
	op(ETextGender::Feminine) \
	op(ETextGender::Neuter) 

enum class ETextGender : uint8;
template<> struct TIsUEnumClass<ETextGender> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextGender>();

#define FOREACH_ENUM_EFORMATARGUMENTTYPE(op) \
	op(EFormatArgumentType::Int) \
	op(EFormatArgumentType::UInt) \
	op(EFormatArgumentType::Float) \
	op(EFormatArgumentType::Double) \
	op(EFormatArgumentType::Text) \
	op(EFormatArgumentType::Gender) 

namespace EFormatArgumentType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EFormatArgumentType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
