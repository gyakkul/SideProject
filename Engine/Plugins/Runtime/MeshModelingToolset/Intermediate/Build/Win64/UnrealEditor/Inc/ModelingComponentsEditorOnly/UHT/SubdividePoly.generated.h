// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Operations/SubdividePoly.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTSEDITORONLY_SubdividePoly_generated_h
#error "SubdividePoly.generated.h already included, missing '#pragma once' in SubdividePoly.h"
#endif
#define MODELINGCOMPONENTSEDITORONLY_SubdividePoly_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_Operations_SubdividePoly_h


#define FOREACH_ENUM_ESUBDIVISIONSCHEME(op) \
	op(ESubdivisionScheme::Bilinear) \
	op(ESubdivisionScheme::CatmullClark) \
	op(ESubdivisionScheme::Loop) 

enum class ESubdivisionScheme : uint8;
template<> struct TIsUEnumClass<ESubdivisionScheme> { enum { Value = true }; };
template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionScheme>();

#define FOREACH_ENUM_ESUBDIVISIONOUTPUTNORMALS(op) \
	op(ESubdivisionOutputNormals::Interpolated) \
	op(ESubdivisionOutputNormals::Generated) \
	op(ESubdivisionOutputNormals::None) 

enum class ESubdivisionOutputNormals : uint8;
template<> struct TIsUEnumClass<ESubdivisionOutputNormals> { enum { Value = true }; };
template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionOutputNormals>();

#define FOREACH_ENUM_ESUBDIVISIONOUTPUTUVS(op) \
	op(ESubdivisionOutputUVs::Interpolated) \
	op(ESubdivisionOutputUVs::None) 

enum class ESubdivisionOutputUVs : uint8;
template<> struct TIsUEnumClass<ESubdivisionOutputUVs> { enum { Value = true }; };
template<> MODELINGCOMPONENTSEDITORONLY_API UEnum* StaticEnum<ESubdivisionOutputUVs>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
