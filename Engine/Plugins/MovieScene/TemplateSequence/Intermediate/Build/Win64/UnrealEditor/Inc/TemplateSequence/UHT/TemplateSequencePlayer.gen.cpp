// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequencePlayer.h"
#include "MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequencePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	DEFINE_FUNCTION(UTemplateSequencePlayer::execCreateTemplateSequencePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTemplateSequence,Z_Param_TemplateSequence);
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings);
		P_GET_OBJECT_REF(ATemplateSequenceActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTemplateSequencePlayer**)Z_Param__Result=UTemplateSequencePlayer::CreateTemplateSequencePlayer(Z_Param_WorldContextObject,Z_Param_TemplateSequence,Z_Param_Settings,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	void UTemplateSequencePlayer::StaticRegisterNativesUTemplateSequencePlayer()
	{
		UClass* Class = UTemplateSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTemplateSequencePlayer", &UTemplateSequencePlayer::execCreateTemplateSequencePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics
	{
		struct TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			UTemplateSequence* TemplateSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ATemplateSequenceActor* OutActor;
			UTemplateSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_TemplateSequence = { "TemplateSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, TemplateSequence), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) }; // 2544210146
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, OutActor), Z_Construct_UClass_ATemplateSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_TemplateSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_OutActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "DynamicOutputParam", "OutActor" },
		{ "ModuleRelativePath", "Public/TemplateSequencePlayer.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateSequencePlayer, nullptr, "CreateTemplateSequencePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms), Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequencePlayer);
	UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister()
	{
		return UTemplateSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer, "CreateTemplateSequencePlayer" }, // 430412013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TemplateSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/TemplateSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePlayer_Statics::ClassParams = {
		&UTemplateSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton, Z_Construct_UClass_UTemplateSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateSequencePlayer.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePlayer>()
	{
		return UTemplateSequencePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePlayer);
	UTemplateSequencePlayer::~UTemplateSequencePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequencePlayer, UTemplateSequencePlayer::StaticClass, TEXT("UTemplateSequencePlayer"), &Z_Registration_Info_UClass_UTemplateSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequencePlayer), 2546103025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_2371466156(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequencePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
