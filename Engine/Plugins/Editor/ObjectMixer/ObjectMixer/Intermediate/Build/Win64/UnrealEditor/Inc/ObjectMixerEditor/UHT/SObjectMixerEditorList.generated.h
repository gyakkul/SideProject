// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Views/List/SObjectMixerEditorList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTMIXEREDITOR_SObjectMixerEditorList_generated_h
#error "SObjectMixerEditorList.generated.h already included, missing '#pragma once' in SObjectMixerEditorList.h"
#endif
#define OBJECTMIXEREDITOR_SObjectMixerEditorList_generated_h

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_List_SObjectMixerEditorList_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectMixerSceneOutlinerColumnInfo_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


template<> OBJECTMIXEREDITOR_API UScriptStruct* StaticStruct<struct FObjectMixerSceneOutlinerColumnInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_List_SObjectMixerEditorList_h


#define FOREACH_ENUM_ELISTVIEWCOLUMNTYPE(op) \
	op(EListViewColumnType::BuiltIn) \
	op(EListViewColumnType::PropertyGenerated) 

enum class EListViewColumnType;
template<> struct TIsUEnumClass<EListViewColumnType> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_API UEnum* StaticEnum<EListViewColumnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
