// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FbxImportUIDetails.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DETAILCUSTOMIZATIONS_FbxImportUIDetails_generated_h
#error "FbxImportUIDetails.generated.h already included, missing '#pragma once' in FbxImportUIDetails.h"
#endif
#define DETAILCUSTOMIZATIONS_FbxImportUIDetails_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DetailCustomizations_Private_FbxImportUIDetails_h


#define FOREACH_ENUM_EMATERIALIMPORTMETHOD(op) \
	op(EMaterialImportMethod::CreateNewMaterials) \
	op(EMaterialImportMethod::CreateNewInstancedMaterials) \
	op(EMaterialImportMethod::DoNotCreateMaterialString) 

enum class EMaterialImportMethod : int32;
template<> struct TIsUEnumClass<EMaterialImportMethod> { enum { Value = true }; };
template<> DETAILCUSTOMIZATIONS_API UEnum* StaticEnum<EMaterialImportMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
