// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/MovieSceneEasingFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingFunction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	struct MovieSceneEasingFunction_eventOnEvaluate_Parms
	{
		float Interp;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MovieSceneEasingFunction_eventOnEvaluate_Parms()
			: ReturnValue(0)
		{
		}
	};
	float IMovieSceneEasingFunction::OnEvaluate(float Interp) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEvaluate instead.");
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneEasingFunction::StaticRegisterNativesUMovieSceneEasingFunction()
	{
	}
	struct Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp = { "Interp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, Interp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Evaluate the easing with an interpolation value between 0 and 1 */" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
		{ "ToolTip", "Evaluate the easing with an interpolation value between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEasingFunction, nullptr, "OnEvaluate", nullptr, nullptr, sizeof(MovieSceneEasingFunction_eventOnEvaluate_Parms), Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEasingFunction);
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister()
	{
		return UMovieSceneEasingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEasingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEasingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneEasingFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate, "OnEvaluate" }, // 3829223639
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Easing Function" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEasingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEasingFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams = {
		&UMovieSceneEasingFunction::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton, Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEasingFunction.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEasingFunction>()
	{
		return UMovieSceneEasingFunction::StaticClass();
	}
	UMovieSceneEasingFunction::UMovieSceneEasingFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingFunction);
	UMovieSceneEasingFunction::~UMovieSceneEasingFunction() {}
	static FName NAME_UMovieSceneEasingFunction_OnEvaluate = FName(TEXT("OnEvaluate"));
	float IMovieSceneEasingFunction::Execute_OnEvaluate(const UObject* O, float Interp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneEasingFunction::StaticClass()));
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneEasingFunction_OnEvaluate);
		if (Func)
		{
			Parms.Interp=Interp;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEasingFunction, UMovieSceneEasingFunction::StaticClass, TEXT("UMovieSceneEasingFunction"), &Z_Registration_Info_UClass_UMovieSceneEasingFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEasingFunction), 2454492217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_335340518(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
