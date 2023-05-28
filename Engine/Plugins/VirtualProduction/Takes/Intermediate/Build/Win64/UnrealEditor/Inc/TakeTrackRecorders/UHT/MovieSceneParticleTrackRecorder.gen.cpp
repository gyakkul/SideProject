// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackRecorders/MovieSceneParticleTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrackRecorder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackRecorder();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_TakeTrackRecorders();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneParticleTrackRecorder::execOnTriggered)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bActivating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggered(Z_Param_Component,Z_Param_bActivating);
		P_NATIVE_END;
	}
	void UMovieSceneParticleTrackRecorder::StaticRegisterNativesUMovieSceneParticleTrackRecorder()
	{
		UClass* Class = UMovieSceneParticleTrackRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggered", &UMovieSceneParticleTrackRecorder::execOnTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics
	{
		struct MovieSceneParticleTrackRecorder_eventOnTriggered_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneParticleTrackRecorder_eventOnTriggered_Parms, Component), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit(void* Obj)
	{
		((MovieSceneParticleTrackRecorder_eventOnTriggered_Parms*)Obj)->bActivating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_bActivating = { "bActivating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneParticleTrackRecorder_eventOnTriggered_Parms), &Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::NewProp_bActivating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneParticleTrackRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParticleTrackRecorder, nullptr, "OnTriggered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::MovieSceneParticleTrackRecorder_eventOnTriggered_Parms), Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneParticleTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackRecorder_NoRegister()
	{
		return UMovieSceneParticleTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeTrackRecorders,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneParticleTrackRecorder_OnTriggered, "OnTriggered" }, // 2448344392
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TrackRecorders/MovieSceneParticleTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/TrackRecorders/MovieSceneParticleTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::ClassParams = {
		&UMovieSceneParticleTrackRecorder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneParticleTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneParticleTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneParticleTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneParticleTrackRecorder.OuterSingleton;
	}
	template<> TAKETRACKRECORDERS_API UClass* StaticClass<UMovieSceneParticleTrackRecorder>()
	{
		return UMovieSceneParticleTrackRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleTrackRecorder);
	UMovieSceneParticleTrackRecorder::~UMovieSceneParticleTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneParticleTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneParticleTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneParticleTrackRecorder, UMovieSceneParticleTrackRecorder::StaticClass, TEXT("UMovieSceneParticleTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneParticleTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneParticleTrackRecorder), 1691333089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneParticleTrackRecorder_h_2456763857(TEXT("/Script/TakeTrackRecorders"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneParticleTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeTrackRecorders_Public_TrackRecorders_MovieSceneParticleTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
