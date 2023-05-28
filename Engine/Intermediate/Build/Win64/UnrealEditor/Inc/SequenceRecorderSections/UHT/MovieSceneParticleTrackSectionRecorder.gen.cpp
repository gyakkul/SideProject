// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneParticleTrackSectionRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrackSectionRecorder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorderSections();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneParticleTrackSectionRecorder::execOnTriggered)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bActivating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggered(Z_Param_Component,Z_Param_bActivating);
		P_NATIVE_END;
	}
	void UMovieSceneParticleTrackSectionRecorder::StaticRegisterNativesUMovieSceneParticleTrackSectionRecorder()
	{
		UClass* Class = UMovieSceneParticleTrackSectionRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggered", &UMovieSceneParticleTrackSectionRecorder::execOnTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics
	{
		struct MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms
		{
			UParticleSystemComponent* Component;
			bool bActivating;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bActivating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms, Component), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit(void* Obj)
	{
		((MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms*)Obj)->bActivating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating = { "bActivating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms), &Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneParticleTrackSectionRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder, nullptr, "OnTriggered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms), Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParticleTrackSectionRecorder);
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_NoRegister()
	{
		return UMovieSceneParticleTrackSectionRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorderSections,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered, "OnTriggered" }, // 4043532124
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneParticleTrackSectionRecorder.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/MovieSceneParticleTrackSectionRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleTrackSectionRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::ClassParams = {
		&UMovieSceneParticleTrackSectionRecorder::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneParticleTrackSectionRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParticleTrackSectionRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneParticleTrackSectionRecorder.OuterSingleton;
	}
	template<> SEQUENCERECORDERSECTIONS_API UClass* StaticClass<UMovieSceneParticleTrackSectionRecorder>()
	{
		return UMovieSceneParticleTrackSectionRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleTrackSectionRecorder);
	UMovieSceneParticleTrackSectionRecorder::~UMovieSceneParticleTrackSectionRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder, UMovieSceneParticleTrackSectionRecorder::StaticClass, TEXT("UMovieSceneParticleTrackSectionRecorder"), &Z_Registration_Info_UClass_UMovieSceneParticleTrackSectionRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParticleTrackSectionRecorder), 1488858136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_2289810041(TEXT("/Script/SequenceRecorderSections"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorderSections_Public_MovieSceneParticleTrackSectionRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
