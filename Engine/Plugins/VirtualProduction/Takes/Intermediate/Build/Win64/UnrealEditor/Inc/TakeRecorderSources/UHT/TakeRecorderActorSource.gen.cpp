// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderActorSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderActorSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderActorSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderActorSource_NoRegister();
	TAKERECORDERSOURCES_API UEnum* Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType();
	TAKESCORE_API UClass* Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSources_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETakeRecorderActorRecordType;
	static UEnum* ETakeRecorderActorRecordType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType, (UObject*)Z_Construct_UPackage__Script_TakeRecorderSources(), TEXT("ETakeRecorderActorRecordType"));
		}
		return Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UEnum* StaticEnum<ETakeRecorderActorRecordType>()
	{
		return ETakeRecorderActorRecordType_StaticEnum();
	}
	struct Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enumerators[] = {
		{ "ETakeRecorderActorRecordType::Possessable", (int64)ETakeRecorderActorRecordType::Possessable },
		{ "ETakeRecorderActorRecordType::Spawnable", (int64)ETakeRecorderActorRecordType::Spawnable },
		{ "ETakeRecorderActorRecordType::ProjectDefault", (int64)ETakeRecorderActorRecordType::ProjectDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "Possessable.Name", "ETakeRecorderActorRecordType::Possessable" },
		{ "ProjectDefault.Name", "ETakeRecorderActorRecordType::ProjectDefault" },
		{ "Spawnable.Name", "ETakeRecorderActorRecordType::Spawnable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TakeRecorderSources,
		nullptr,
		"ETakeRecorderActorRecordType",
		"ETakeRecorderActorRecordType",
		Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.InnerSingleton, Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETakeRecorderActorRecordType.InnerSingleton;
	}
	DEFINE_FUNCTION(UTakeRecorderActorSource::execGetSourceActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<AActor>*)Z_Param__Result=P_THIS->GetSourceActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderActorSource::execSetSourceActor)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<AActor>,Z_Param_InTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceActor(Z_Param_InTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderActorSource::execRemoveActorFromSources)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(UTakeRecorderSources,Z_Param_InSources);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTakeRecorderActorSource::RemoveActorFromSources(Z_Param_InActor,Z_Param_InSources);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorderActorSource::execAddSourceForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(UTakeRecorderSources,Z_Param_InSources);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTakeRecorderSource**)Z_Param__Result=UTakeRecorderActorSource::AddSourceForActor(Z_Param_InActor,Z_Param_InSources);
		P_NATIVE_END;
	}
	void UTakeRecorderActorSource::StaticRegisterNativesUTakeRecorderActorSource()
	{
		UClass* Class = UTakeRecorderActorSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSourceForActor", &UTakeRecorderActorSource::execAddSourceForActor },
			{ "GetSourceActor", &UTakeRecorderActorSource::execGetSourceActor },
			{ "RemoveActorFromSources", &UTakeRecorderActorSource::execRemoveActorFromSources },
			{ "SetSourceActor", &UTakeRecorderActorSource::execSetSourceActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics
	{
		struct TakeRecorderActorSource_eventAddSourceForActor_Parms
		{
			AActor* InActor;
			UTakeRecorderSources* InSources;
			UTakeRecorderSource* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSources;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventAddSourceForActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_InSources = { "InSources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventAddSourceForActor_Parms, InSources), Z_Construct_UClass_UTakeRecorderSources_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventAddSourceForActor_Parms, ReturnValue), Z_Construct_UClass_UTakeRecorderSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_InSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/*\n\x09 * Add a take recorder source for the given actor. \n\x09 *\n\x09 * @param InActor The actor to add a source for\n\x09 * @param InSources The sources to add the actor to\n\x09 * @return The added source or the source already present with the same actor\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "* Add a take recorder source for the given actor.\n*\n* @param InActor The actor to add a source for\n* @param InSources The sources to add the actor to\n* @return The added source or the source already present with the same actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderActorSource, nullptr, "AddSourceForActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::TakeRecorderActorSource_eventAddSourceForActor_Parms), Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics
	{
		struct TakeRecorderActorSource_eventGetSourceActor_Parms
		{
			TSoftObjectPtr<AActor> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventGetSourceActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder Actor Source" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderActorSource, nullptr, "GetSourceActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::TakeRecorderActorSource_eventGetSourceActor_Parms), Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics
	{
		struct TakeRecorderActorSource_eventRemoveActorFromSources_Parms
		{
			AActor* InActor;
			UTakeRecorderSources* InSources;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventRemoveActorFromSources_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::NewProp_InSources = { "InSources", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventRemoveActorFromSources_Parms, InSources), Z_Construct_UClass_UTakeRecorderSources_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::NewProp_InSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/*\n\x09 * Remove the given actor from TakeRecorderSources.\n\x09 *\n\x09 * @param InActor The actor to remove from the sources\n\x09 * @param InSources The sources from where to remove the actor\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "* Remove the given actor from TakeRecorderSources.\n*\n* @param InActor The actor to remove from the sources\n* @param InSources The sources from where to remove the actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderActorSource, nullptr, "RemoveActorFromSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::TakeRecorderActorSource_eventRemoveActorFromSources_Parms), Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics
	{
		struct TakeRecorderActorSource_eventSetSourceActor_Parms
		{
			TSoftObjectPtr<AActor> InTarget;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::NewProp_InTarget = { "InTarget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorderActorSource_eventSetSourceActor_Parms, InTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::NewProp_InTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder Actor Source" },
		{ "Comment", "/** Set the Target actor that we are going to record. Will reset the Recorded Property Map to defaults. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Set the Target actor that we are going to record. Will reset the Recorded Property Map to defaults." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorderActorSource, nullptr, "SetSourceActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::TakeRecorderActorSource_eventSetSourceActor_Parms), Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderActorSource);
	UClass* Z_Construct_UClass_UTakeRecorderActorSource_NoRegister()
	{
		return UTakeRecorderActorSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderActorSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecordType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordParentHierarchy_MetaData[];
#endif
		static void NewProp_bRecordParentHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordParentHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecordedProperties;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludeAnimationNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeAnimationNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeAnimationNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeAnimationNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeAnimationNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeAnimationNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootLevelSequence;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FactorySettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackRecorders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRecorders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackRecorders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowProgressDialog_MetaData[];
#endif
		static void NewProp_bShowProgressDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowProgressDialog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderActorSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorderActorSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorderActorSource_AddSourceForActor, "AddSourceForActor" }, // 286959253
		{ &Z_Construct_UFunction_UTakeRecorderActorSource_GetSourceActor, "GetSourceActor" }, // 2997283414
		{ &Z_Construct_UFunction_UTakeRecorderActorSource_RemoveActorFromSources, "RemoveActorFromSources" }, // 3848124720
		{ &Z_Construct_UFunction_UTakeRecorderActorSource_SetSourceActor, "SetSourceActor" }, // 1011401906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Actors" },
		{ "Comment", "/**\n* This Take Recorder Source can record an actor from the World's properties.\n* Records the properties of the actor and the components on the actor and safely\n* handles new components being spawned at runtime and the actor being destroyed.\n*/" },
		{ "IncludePath", "TakeRecorderActorSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Any Actor" },
		{ "ToolTip", "This Take Recorder Source can record an actor from the World's properties.\nRecords the properties of the actor and the components on the actor and safely\nhandles new components being spawned at runtime and the actor being destroyed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/** Reference to the actor in the world that should have it's properties recorded. */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Reference to the actor in the world that should have it's properties recorded." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/**\n\x09 * Should this actor be recorded as a Possessable in Sequencer? If so the resulting Object Binding\x09\n\x09 * will not create a Spawnable copy of this object and instead will possess this object in the level.\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Should this actor be recorded as a Possessable in Sequencer? If so the resulting Object Binding\nwill not create a Spawnable copy of this object and instead will possess this object in the level." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType = { "RecordType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, RecordType), Z_Construct_UEnum_TakeRecorderSources_ETakeRecorderActorRecordType, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType_MetaData)) }; // 1760953694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/** \n\x09 * Whether to ensure that the parent hierarchy is also recorded. If recording to possessable and the parent is not recorded, \n\x09 * the recorded transforms will be in local space since the child will still be attached to the parent in the level after \n\x09 * recording.  If recording to spawnable and the parent is not recorded, the recorded transforms will be in global space \n\x09 * since the child will not be attached to the parent in the level.\n\x09 */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Whether to ensure that the parent hierarchy is also recorded. If recording to possessable and the parent is not recorded,\nthe recorded transforms will be in local space since the child will still be attached to the parent in the level after\nrecording.  If recording to spawnable and the parent is not recorded, the recorded transforms will be in global space\nsince the child will not be attached to the parent in the level." },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy_SetBit(void* Obj)
	{
		((UTakeRecorderActorSource*)Obj)->bRecordParentHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy = { "bRecordParentHierarchy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderActorSource), &Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/** Whether to perform key-reduction algorithms as part of the recording */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Whether to perform key-reduction algorithms as part of the recording" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UTakeRecorderActorSource*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderActorSource), &Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordedProperties_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/**\n\x09 * Lists the properties and components on the current actor and whether or not each property will be\n\x09 * recorded into a track in the resulting Level Sequence. \n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Lists the properties and components on the current actor and whether or not each property will be\nrecorded into a track in the resulting Level Sequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordedProperties = { "RecordedProperties", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, RecordedProperties), Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordedProperties_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames_Inner = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/** Include only the animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Include only the animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames = { "IncludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, IncludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames_Inner = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames_MetaData[] = {
		{ "Category", "Actor Source" },
		{ "Comment", "/** Exclude all animation bones/curves that match this list */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Exclude all animation bones/curves that match this list" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames = { "ExcludeAnimationNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, ExcludeAnimationNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TargetLevelSequence_MetaData[] = {
		{ "Comment", "/** The level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "The level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TargetLevelSequence = { "TargetLevelSequence", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, TargetLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TargetLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TargetLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RootLevelSequence_MetaData[] = {
		{ "Comment", "/** The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RootLevelSequence = { "RootLevelSequence", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, RootLevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RootLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RootLevelSequence_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings_MetaData[] = {
		{ "Comment", "/**\n\x09* Dynamically created list of settings objects for the different factories that are recording something \n\x09* on this actor. If a Factory has no properties it can record the settings objects will not get created.\n\x09* Only one instance of this object exists for a factory and the factory recorder will be passed the shared \n\x09* instance.\n\x09*/" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Dynamically created list of settings objects for the different factories that are recording something\non this actor. If a Factory has no properties it can record the settings objects will not get created.\nOnly one instance of this object exists for a factory and the factory recorder will be passed the shared\ninstance." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, FactorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders_Inner = { "TrackRecorders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrackRecorder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders_MetaData[] = {
		{ "Comment", "/**\n\x09* An array of section recorders created during the recording process that are capturing data about the actor/components.\n\x09* Will be an empty list when a recording is not in progress.\n\x09*/" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "An array of section recorders created during the recording process that are capturing data about the actor/components.\nWill be an empty list when a recording is not in progress." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders = { "TrackRecorders", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, TrackRecorders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ParentSource_MetaData[] = {
		{ "Comment", "/** The parent actor source that generated this actor source (ie. through parenting or as an attached component). Null after PostRecording */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "The parent actor source that generated this actor source (ie. through parenting or as an attached component). Null after PostRecording" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ParentSource = { "ParentSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderActorSource, ParentSource), Z_Construct_UClass_UTakeRecorderActorSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ParentSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ParentSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog_MetaData[] = {
		{ "Comment", "/** Show Dialog during the (possibly) slow parts of the take recording */" },
		{ "ModuleRelativePath", "Private/TakeRecorderActorSource.h" },
		{ "ToolTip", "Show Dialog during the (possibly) slow parts of the take recording" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog_SetBit(void* Obj)
	{
		((UTakeRecorderActorSource*)Obj)->bShowProgressDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog = { "bShowProgressDialog", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderActorSource), &Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderActorSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bRecordParentHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RecordedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_IncludeAnimationNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ExcludeAnimationNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TargetLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_RootLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_FactorySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_TrackRecorders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_ParentSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderActorSource_Statics::NewProp_bShowProgressDialog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderActorSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderActorSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderActorSource_Statics::ClassParams = {
		&UTakeRecorderActorSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakeRecorderActorSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderActorSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderActorSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderActorSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderActorSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderActorSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderActorSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderActorSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderActorSource>()
	{
		return UTakeRecorderActorSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderActorSource);
	UTakeRecorderActorSource::~UTakeRecorderActorSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::EnumInfo[] = {
		{ ETakeRecorderActorRecordType_StaticEnum, TEXT("ETakeRecorderActorRecordType"), &Z_Registration_Info_UEnum_ETakeRecorderActorRecordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1760953694U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderActorSource, UTakeRecorderActorSource::StaticClass, TEXT("UTakeRecorderActorSource"), &Z_Registration_Info_UClass_UTakeRecorderActorSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderActorSource), 4262661300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_1969312219(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderActorSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
