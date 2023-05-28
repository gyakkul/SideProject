// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Blackboard/BlackboardKeyEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BlackboardKeyEnums_generated_h
#error "BlackboardKeyEnums.generated.h already included, missing '#pragma once' in BlackboardKeyEnums.h"
#endif
#define AIMODULE_BlackboardKeyEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyEnums_h


#define FOREACH_ENUM_EBASICKEYOPERATION(op) \
	op(EBasicKeyOperation::Set) \
	op(EBasicKeyOperation::NotSet) 

namespace EBasicKeyOperation { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBasicKeyOperation::Type>();

#define FOREACH_ENUM_EARITHMETICKEYOPERATION(op) \
	op(EArithmeticKeyOperation::Equal) \
	op(EArithmeticKeyOperation::NotEqual) \
	op(EArithmeticKeyOperation::Less) \
	op(EArithmeticKeyOperation::LessOrEqual) \
	op(EArithmeticKeyOperation::Greater) \
	op(EArithmeticKeyOperation::GreaterOrEqual) 

namespace EArithmeticKeyOperation { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EArithmeticKeyOperation::Type>();

#define FOREACH_ENUM_ETEXTKEYOPERATION(op) \
	op(ETextKeyOperation::Equal) \
	op(ETextKeyOperation::NotEqual) \
	op(ETextKeyOperation::Contain) \
	op(ETextKeyOperation::NotContain) 

namespace ETextKeyOperation { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<ETextKeyOperation::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
