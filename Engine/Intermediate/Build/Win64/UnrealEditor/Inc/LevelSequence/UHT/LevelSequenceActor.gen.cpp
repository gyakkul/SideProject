// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceActor.h"
#include "LevelSequenceCameraSettings.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceBurnInInitSettings);
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams = {
		&ULevelSequenceBurnInInitSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInInitSettings>()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	ULevelSequenceBurnInInitSettings::ULevelSequenceBurnInInitSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	ULevelSequenceBurnInInitSettings::~ULevelSequenceBurnInInitSettings() {}
	DEFINE_FUNCTION(ULevelSequenceBurnInOptions::execSetBurnIn)
	{
		P_GET_STRUCT(FSoftClassPath,Z_Param_InBurnInClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBurnIn(Z_Param_InBurnInClass);
		P_NATIVE_END;
	}
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
		UClass* Class = ULevelSequenceBurnInOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBurnIn", &ULevelSequenceBurnInOptions::execSetBurnIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct LevelSequenceBurnInOptions_eventSetBurnIn_Parms
		{
			FSoftClassPath InBurnInClass;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBurnInClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass = { "InBurnInClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceBurnInOptions_eventSetBurnIn_Parms, InBurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "Comment", "/** Loads the specified class path and initializes an instance, then stores it in Settings. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Loads the specified class path and initializes an instance, then stores it in Settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnInOptions, nullptr, "SetBurnIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::LevelSequenceBurnInOptions_eventSetBurnIn_Parms), Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceBurnInOptions);
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[];
#endif
		static void NewProp_bUseBurnIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn, "SetBurnIn" }, // 1388183742
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void* Obj)
	{
		((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn = { "bUseBurnIn", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceBurnInOptions), &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "MetaClass", "/Script/LevelSequence.LevelSequenceBurnIn" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams = {
		&ULevelSequenceBurnInOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers),
		0,
		0x00B004A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton, Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInOptions>()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	ULevelSequenceBurnInOptions::~ULevelSequenceBurnInOptions() {}
	struct Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "OnLevelSequenceLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ALevelSequenceActor::FOnLevelSequenceLoaded_DelegateWrapper(const FScriptDelegate& OnLevelSequenceLoaded)
{
	OnLevelSequenceLoaded.ProcessDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBindings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->FindNamedBindings(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->FindNamedBinding(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execResetBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execResetBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBinding(Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBindingByTag(Z_Param_Tag,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBinding(Z_Param_Binding,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execAddBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBindingByTag(Z_Param_BindingTag,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execAddBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBinding(Z_Param_Binding,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBindingByTag(Z_Param_BindingTag,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinding(Z_Param_Binding,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execShowBurnin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowBurnin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execHideBurnin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBurnin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execGetSequencePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequencePlayer**)Z_Param__Result=P_THIS->GetSequencePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetReplicatePlayback)
	{
		P_GET_UBOOL(Z_Param_ReplicatePlayback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicatePlayback(Z_Param_ReplicatePlayback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execLoadSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->LoadSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &ALevelSequenceActor::execAddBinding },
			{ "AddBindingByTag", &ALevelSequenceActor::execAddBindingByTag },
			{ "FindNamedBinding", &ALevelSequenceActor::execFindNamedBinding },
			{ "FindNamedBindings", &ALevelSequenceActor::execFindNamedBindings },
			{ "GetSequence", &ALevelSequenceActor::execGetSequence },
			{ "GetSequencePlayer", &ALevelSequenceActor::execGetSequencePlayer },
			{ "HideBurnin", &ALevelSequenceActor::execHideBurnin },
			{ "LoadSequence", &ALevelSequenceActor::execLoadSequence },
			{ "RemoveBinding", &ALevelSequenceActor::execRemoveBinding },
			{ "RemoveBindingByTag", &ALevelSequenceActor::execRemoveBindingByTag },
			{ "ResetBinding", &ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", &ALevelSequenceActor::execResetBindings },
			{ "SetBinding", &ALevelSequenceActor::execSetBinding },
			{ "SetBindingByTag", &ALevelSequenceActor::execSetBindingByTag },
			{ "SetReplicatePlayback", &ALevelSequenceActor::execSetReplicatePlayback },
			{ "SetSequence", &ALevelSequenceActor::execSetSequence },
			{ "ShowBurnin", &ALevelSequenceActor::execShowBurnin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceActor_eventAddBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actor Actor to bind\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actor Actor to bind\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::LevelSequenceActor_eventAddBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics
	{
		struct LevelSequenceActor_eventAddBindingByTag_Parms
		{
			FName BindingTag;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, BindingTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceActor_eventAddBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actor        The actor to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actor        The actor to assign to all the tagged bindings\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBindingByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::LevelSequenceActor_eventAddBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics
	{
		struct LevelSequenceActor_eventFindNamedBinding_Parms
		{
			FName Tag;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve the first object binding that has been tagged with the specified name\n\x09 */" },
		{ "DisplayName", "Find Binding by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve the first object binding that has been tagged with the specified name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::LevelSequenceActor_eventFindNamedBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics
	{
		struct LevelSequenceActor_eventFindNamedBindings_Parms
		{
			FName Tag;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve all the bindings that have been tagged with the specified name\n\x09 *\n\x09 * @param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 * @return An array containing all the bindings that are tagged with this name, potentially empty.\n\x09 */" },
		{ "DisplayName", "Find Bindings by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve all the bindings that have been tagged with the specified name\n\n@param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n@return An array containing all the bindings that are tagged with this name, potentially empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::LevelSequenceActor_eventFindNamedBindings_Parms), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the level sequence being played by this actor.\n\x09 *\n\x09 * @return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::LevelSequenceActor_eventGetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics
	{
		struct LevelSequenceActor_eventGetSequencePlayer_Parms
		{
			ULevelSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Access this actor's sequence player, or None if it is not yet initialized\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Access this actor's sequence player, or None if it is not yet initialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequencePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::LevelSequenceActor_eventGetSequencePlayer_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/* Hide burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Hide burnin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "HideBurnin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_HideBurnin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics
	{
		struct LevelSequenceActor_eventLoadSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventLoadSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "LoadSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::LevelSequenceActor_eventLoadSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_LoadSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::LevelSequenceActor_eventRemoveBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics
	{
		struct LevelSequenceActor_eventRemoveBindingByTag_Parms
		{
			FName Tag;
			AActor* Actor;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBindingByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::LevelSequenceActor_eventRemoveBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Resets the specified binding back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::LevelSequenceActor_eventResetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Resets all overridden bindings back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBindings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 1341447431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData)) };
	void Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actors Actors to bind\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actors Actors to bind\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::LevelSequenceActor_eventSetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics
	{
		struct LevelSequenceActor_eventSetBindingByTag_Parms
		{
			FName BindingTag;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, BindingTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData)) };
	void Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceActor_eventSetBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player|Bindings" },
		{ "Comment", "/**\n\x09 * Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actors       The actors to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by \n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09  set in Sequencer UI. This function will not modify the original asset.\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actors       The actors to assign to all the tagged bindings\n@param bAllowBindingsFromAsset If false the new bindings being supplied here will replace the bindings set in the level sequence asset, meaning the original object animated by\n                                                               Sequencer will no longer be animated. Bindings set to spawnables will not spawn if false. If true, new bindings will be in addition to ones set\n                                                               set in Sequencer UI. This function will not modify the original asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBindingByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::LevelSequenceActor_eventSetBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics
	{
		struct LevelSequenceActor_eventSetReplicatePlayback_Parms
		{
			bool ReplicatePlayback;
		};
		static void NewProp_ReplicatePlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicatePlayback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetReplicatePlayback_Parms*)Obj)->ReplicatePlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback = { "ReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set whether or not to replicate playback for this actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set whether or not to replicate playback for this actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetReplicatePlayback", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::LevelSequenceActor_eventSetReplicatePlayback_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the level sequence being played by this actor.\n\x09 *\n\x09 * @param InSequence The sequence object to set.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::LevelSequenceActor_eventSetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/* Show burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Show burnin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ShowBurnin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelSequenceActor);
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequenceAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSequence;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BindingOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceData_MetaData[];
#endif
		static void NewProp_bOverrideInstanceData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicatePlayback_MetaData[];
#endif
		static void NewProp_bReplicatePlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicatePlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BurnInInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBurnin_MetaData[];
#endif
		static void NewProp_bShowBurnin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBurnin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 2867183513
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag, "AddBindingByTag" }, // 1476889448
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding, "FindNamedBinding" }, // 706307366
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings, "FindNamedBindings" }, // 2154719165
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 492421244
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 479634621
		{ &Z_Construct_UFunction_ALevelSequenceActor_HideBurnin, "HideBurnin" }, // 3765848395
		{ &Z_Construct_UFunction_ALevelSequenceActor_LoadSequence, "LoadSequence" }, // 2044006380
		{ &Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature, "OnLevelSequenceLoaded__DelegateSignature" }, // 662857651
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 1073306639
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag, "RemoveBindingByTag" }, // 2477998393
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 2097719646
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 541650757
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 3434454802
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag, "SetBindingByTag" }, // 1706064052
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback, "SetReplicatePlayback" }, // 2970131625
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 2521303764
		{ &Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin, "ShowBurnin" }, // 3199087028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor responsible for controlling a specific level sequence in the world.\n */" },
		{ "HideCategories", "Rendering Physics HLOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData)) }; // 2544210146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x001600000008203c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset_MetaData[] = {
		{ "AllowedClasses", "/Script/LevelSequence.LevelSequence" },
		{ "Category", "General" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0015000000000035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Cameras" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, CameraSettings), Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData)) }; // 1520971703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x001600000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mapping of actors to override the sequence bindings with */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides = { "BindingOverrides", nullptr, (EPropertyFlags)0x001600000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bAutoPlay_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable specification of dynamic instance data to be supplied to the sequence during playback */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Enable specification of dynamic instance data to be supplied to the sequence during playback" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bOverrideInstanceData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData = { "bOverrideInstanceData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData[] = {
		{ "BlueprintSetter", "SetReplicatePlayback" },
		{ "Category", "Replication" },
		{ "Comment", "/** If true, playback of this level sequence on the server will be synchronized across other clients */" },
		{ "DisplayName", "Replicate Playback" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "If true, playback of this level sequence on the server will be synchronized across other clients" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bReplicatePlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback = { "bReplicatePlayback", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance data that can be used to dynamically control sequence evaluation at runtime */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Instance data that can be used to dynamically control sequence evaluation at runtime" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x001600000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, DefaultInstanceData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData[] = {
		{ "Comment", "/** Burn-in widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Burn-in widget" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance = { "BurnInInstance", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bShowBurnin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin = { "bShowBurnin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequenceAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieScenePlaybackClient), false },  // 1288736840
			{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },  // 604663813
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams = {
		&ALevelSequenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		if (!Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton, Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelSequenceActor.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceActor>()
	{
		return ALevelSequenceActor::StaticClass();
	}

	void ALevelSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SequencePlayer(TEXT("SequencePlayer"));
		static const FName Name_LevelSequenceAsset(TEXT("LevelSequenceAsset"));

		const bool bIsValid = true
			&& Name_SequencePlayer == ClassReps[(int32)ENetFields_Private::SequencePlayer].Property->GetFName()
			&& Name_LevelSequenceAsset == ClassReps[(int32)ENetFields_Private::LevelSequenceAsset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
	ALevelSequenceActor::~ALevelSequenceActor() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundActorProxy;
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"));
	}
	return Z_Registration_Info_UScriptStruct_BoundActorProxy.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FBoundActorProxy>()
{
	return FBoundActorProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies the actor to override the binding with */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Specifies the actor to override the binding with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0014040800000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"BoundActorProxy",
		sizeof(FBoundActorProxy),
		alignof(FBoundActorProxy),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoundActorProxy.InnerSingleton;
	}
	void AReplicatedLevelSequenceActor::StaticRegisterNativesAReplicatedLevelSequenceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReplicatedLevelSequenceActor);
	UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister()
	{
		return AReplicatedLevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelSequenceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A level sequence actor that is set to always be relevant for networking purposes\n */" },
		{ "HideCategories", "Rendering Physics HLOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A level sequence actor that is set to always be relevant for networking purposes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicatedLevelSequenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::ClassParams = {
		&AReplicatedLevelSequenceActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor()
	{
		if (!Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton, Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReplicatedLevelSequenceActor.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<AReplicatedLevelSequenceActor>()
	{
		return AReplicatedLevelSequenceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicatedLevelSequenceActor);
	AReplicatedLevelSequenceActor::~AReplicatedLevelSequenceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ScriptStructInfo[] = {
		{ FBoundActorProxy::StaticStruct, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps, TEXT("BoundActorProxy"), &Z_Registration_Info_UScriptStruct_BoundActorProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundActorProxy), 2816413122U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceBurnInInitSettings, ULevelSequenceBurnInInitSettings::StaticClass, TEXT("ULevelSequenceBurnInInitSettings"), &Z_Registration_Info_UClass_ULevelSequenceBurnInInitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceBurnInInitSettings), 2400006788U) },
		{ Z_Construct_UClass_ULevelSequenceBurnInOptions, ULevelSequenceBurnInOptions::StaticClass, TEXT("ULevelSequenceBurnInOptions"), &Z_Registration_Info_UClass_ULevelSequenceBurnInOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceBurnInOptions), 2097630118U) },
		{ Z_Construct_UClass_ALevelSequenceActor, ALevelSequenceActor::StaticClass, TEXT("ALevelSequenceActor"), &Z_Registration_Info_UClass_ALevelSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelSequenceActor), 2378049578U) },
		{ Z_Construct_UClass_AReplicatedLevelSequenceActor, AReplicatedLevelSequenceActor::StaticClass, TEXT("AReplicatedLevelSequenceActor"), &Z_Registration_Info_UClass_AReplicatedLevelSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReplicatedLevelSequenceActor), 3810391688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_2314328767(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
