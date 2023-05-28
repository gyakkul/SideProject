// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataValidationModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAVALIDATION_DataValidationModule_generated_h
#error "DataValidationModule.generated.h already included, missing '#pragma once' in DataValidationModule.h"
#endif
#define DATAVALIDATION_DataValidationModule_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h


#define FOREACH_ENUM_EDATAVALIDATIONUSECASE(op) \
	op(EDataValidationUsecase::None) \
	op(EDataValidationUsecase::Manual) \
	op(EDataValidationUsecase::Commandlet) \
	op(EDataValidationUsecase::Save) \
	op(EDataValidationUsecase::PreSubmit) \
	op(EDataValidationUsecase::Script) 

enum class EDataValidationUsecase : uint8;
template<> struct TIsUEnumClass<EDataValidationUsecase> { enum { Value = true }; };
template<> DATAVALIDATION_API UEnum* StaticEnum<EDataValidationUsecase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
