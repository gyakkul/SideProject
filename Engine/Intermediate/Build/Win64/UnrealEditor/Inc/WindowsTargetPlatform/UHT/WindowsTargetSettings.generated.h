// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowsTargetSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINDOWSTARGETPLATFORM_WindowsTargetSettings_generated_h
#error "WindowsTargetSettings.generated.h already included, missing '#pragma once' in WindowsTargetSettings.h"
#endif
#define WINDOWSTARGETPLATFORM_WindowsTargetSettings_generated_h

#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_SPARSE_DATA
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_ACCESSORS
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsTargetSettings(); \
	friend struct Z_Construct_UClass_UWindowsTargetSettings_Statics; \
public: \
	DECLARE_CLASS(UWindowsTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WindowsTargetPlatform"), NO_API) \
	DECLARE_SERIALIZER(UWindowsTargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsTargetSettings(); \
	friend struct Z_Construct_UClass_UWindowsTargetSettings_Statics; \
public: \
	DECLARE_CLASS(UWindowsTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WindowsTargetPlatform"), NO_API) \
	DECLARE_SERIALIZER(UWindowsTargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsTargetSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsTargetSettings(UWindowsTargetSettings&&); \
	NO_API UWindowsTargetSettings(const UWindowsTargetSettings&); \
public: \
	NO_API virtual ~UWindowsTargetSettings();


#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsTargetSettings(UWindowsTargetSettings&&); \
	NO_API UWindowsTargetSettings(const UWindowsTargetSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsTargetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsTargetSettings) \
	NO_API virtual ~UWindowsTargetSettings();


#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_38_PROLOG
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_SPARSE_DATA \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_ACCESSORS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_INCLASS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_SPARSE_DATA \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_ACCESSORS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindowsTargetSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSTARGETPLATFORM_API UClass* StaticClass<class UWindowsTargetSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h


#define FOREACH_ENUM_ECOMPILERVERSION(op) \
	op(ECompilerVersion::Default) \
	op(ECompilerVersion::VisualStudio2015) \
	op(ECompilerVersion::VisualStudio2017) \
	op(ECompilerVersion::VisualStudio2019) \
	op(ECompilerVersion::VisualStudio2022) 

enum class ECompilerVersion : uint8;
template<> struct TIsUEnumClass<ECompilerVersion> { enum { Value = true }; };
template<> WINDOWSTARGETPLATFORM_API UEnum* StaticEnum<ECompilerVersion>();

#define FOREACH_ENUM_EDEFAULTGRAPHICSRHI(op) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_Default) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_DX11) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_DX12) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_Vulkan) 

enum class EDefaultGraphicsRHI : uint8;
template<> struct TIsUEnumClass<EDefaultGraphicsRHI> { enum { Value = true }; };
template<> WINDOWSTARGETPLATFORM_API UEnum* StaticEnum<EDefaultGraphicsRHI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
