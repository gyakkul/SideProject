// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceDirector.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceDirector() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActor)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetBoundActor(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundActors)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetBoundActors(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObject)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetBoundObject(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetBoundObjects)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetMasterSequenceTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetMasterSequenceTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceDirector::execGetRootSequenceTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetRootSequenceTime();
		P_NATIVE_END;
	}
	static FName NAME_ULevelSequenceDirector_OnCreated = FName(TEXT("OnCreated"));
	void ULevelSequenceDirector::OnCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceDirector_OnCreated),NULL);
	}
	void ULevelSequenceDirector::StaticRegisterNativesULevelSequenceDirector()
	{
		UClass* Class = ULevelSequenceDirector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundActor", &ULevelSequenceDirector::execGetBoundActor },
			{ "GetBoundActors", &ULevelSequenceDirector::execGetBoundActors },
			{ "GetBoundObject", &ULevelSequenceDirector::execGetBoundObject },
			{ "GetBoundObjects", &ULevelSequenceDirector::execGetBoundObjects },
			{ "GetCurrentTime", &ULevelSequenceDirector::execGetCurrentTime },
			{ "GetMasterSequenceTime", &ULevelSequenceDirector::execGetMasterSequenceTime },
			{ "GetRootSequenceTime", &ULevelSequenceDirector::execGetRootSequenceTime },
			{ "GetSequence", &ULevelSequenceDirector::execGetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics
	{
		struct LevelSequenceDirector_eventGetBoundActor_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid Actor binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::LevelSequenceDirector_eventGetBoundActor_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics
	{
		struct LevelSequenceDirector_eventGetBoundActors_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the actor bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::LevelSequenceDirector_eventGetBoundActors_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics
	{
		struct LevelSequenceDirector_eventGetBoundObject_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the first valid binding inside this sub-sequence that relates to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::LevelSequenceDirector_eventGetBoundObject_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics
	{
		struct LevelSequenceDirector_eventGetBoundObjects_Parms
		{
			FMovieSceneObjectBindingID ObjectBinding;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Resolve the bindings inside this sub-sequence that relate to the specified ID\n\x09 * @note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\x09 *\n\x09 * @param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Resolve the bindings inside this sub-sequence that relate to the specified ID\n@note: ObjectBinding should be constructed from the same sequence as this Sequence Director's owning Sequence (see the GetSequenceBinding node)\n\n@param ObjectBinding The ID for the object binding inside this sub-sequence or one of its children to resolve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetBoundObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::LevelSequenceDirector_eventGetBoundObjects_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct LevelSequenceDirector_eventGetCurrentTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Get the current time for this director's sub-sequence (or the root sequence, if this is a root sequence director)\n\x09 * @return The current playback position of this director's sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Get the current time for this director's sub-sequence (or the root sequence, if this is a root sequence director)\n@return The current playback position of this director's sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::LevelSequenceDirector_eventGetCurrentTime_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct LevelSequenceDirector_eventGetMasterSequenceTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetMasterSequenceTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRootSequenceTime" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetMasterSequenceTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::LevelSequenceDirector_eventGetMasterSequenceTime_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct LevelSequenceDirector_eventGetRootSequenceTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetRootSequenceTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/**\n\x09 * Get the current time for the outermost (root) sequence\n\x09 * @return The current playback position of the outermost (root) sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Get the current time for the outermost (root) sequence\n@return The current playback position of the outermost (root) sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetRootSequenceTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::LevelSequenceDirector_eventGetRootSequenceTime_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics
	{
		struct LevelSequenceDirector_eventGetSequence_Parms
		{
			UMovieSceneSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceDirector_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Director" },
		{ "Comment", "/*\n\x09 * Get the current sequence that this director is playing back within \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "* Get the current sequence that this director is playing back within" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::LevelSequenceDirector_eventGetSequence_Parms), Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "Comment", "/** Called when this director is created */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Called when this director is created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceDirector, nullptr, "OnCreated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceDirector_OnCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceDirector_OnCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceDirector);
	UClass* Z_Construct_UClass_ULevelSequenceDirector_NoRegister()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSequenceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubSequenceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScenePlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MovieScenePlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceDirector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActor, "GetBoundActor" }, // 995881811
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundActors, "GetBoundActors" }, // 3515572953
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObject, "GetBoundObject" }, // 2396521093
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetBoundObjects, "GetBoundObjects" }, // 3394941553
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetCurrentTime, "GetCurrentTime" }, // 191865269
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetMasterSequenceTime, "GetMasterSequenceTime" }, // 1640509390
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetRootSequenceTime, "GetRootSequenceTime" }, // 1329612520
		{ &Z_Construct_UFunction_ULevelSequenceDirector_GetSequence, "GetSequence" }, // 785019084
		{ &Z_Construct_UFunction_ULevelSequenceDirector_OnCreated, "OnCreated" }, // 4101616420
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/** Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Pointer to the player that's playing back this director's sequence. Only valid in game or in PIE/Simulate." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceDirector, Player), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData[] = {
		{ "Comment", "/** The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "The Sequence ID for the sequence this director is playing back within - has to be stored as an int32 so that it is reinstanced correctly" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID = { "SubSequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceDirector, SubSequenceID), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData[] = {
		{ "Comment", "/** Native player interface index - stored by index so that it can be reinstanced correctly */" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ToolTip", "Native player interface index - stored by index so that it can be reinstanced correctly" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex = { "MovieScenePlayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceDirector, MovieScenePlayerIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_SubSequenceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceDirector_Statics::NewProp_MovieScenePlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams = {
		&ULevelSequenceDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceDirector()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton, Z_Construct_UClass_ULevelSequenceDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceDirector.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceDirector>()
	{
		return ULevelSequenceDirector::StaticClass();
	}
	ULevelSequenceDirector::ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceDirector);
	ULevelSequenceDirector::~ULevelSequenceDirector() {}
	void ULegacyLevelSequenceDirectorBlueprint::StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyLevelSequenceDirectorBlueprint);
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_NoRegister()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceDirector.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceDirector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyLevelSequenceDirectorBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams = {
		&ULegacyLevelSequenceDirectorBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint()
	{
		if (!Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton, Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULegacyLevelSequenceDirectorBlueprint>()
	{
		return ULegacyLevelSequenceDirectorBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyLevelSequenceDirectorBlueprint);
	ULegacyLevelSequenceDirectorBlueprint::~ULegacyLevelSequenceDirectorBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceDirector, ULevelSequenceDirector::StaticClass, TEXT("ULevelSequenceDirector"), &Z_Registration_Info_UClass_ULevelSequenceDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceDirector), 2940112583U) },
		{ Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint, ULegacyLevelSequenceDirectorBlueprint::StaticClass, TEXT("ULegacyLevelSequenceDirectorBlueprint"), &Z_Registration_Info_UClass_ULegacyLevelSequenceDirectorBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyLevelSequenceDirectorBlueprint), 3299208076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_2277002772(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
