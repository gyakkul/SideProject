// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/IMovieSceneTransformOrigin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTransformOrigin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	struct MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms
	{
		FTransform ReturnValue;
	};
	FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_GetTransformOrigin instead.");
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneTransformOrigin::StaticRegisterNativesUMovieSceneTransformOrigin()
	{
	}
	struct Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the transform from which all absolute component transform sections should be relative. Scale is ignored. */" },
		{ "DisplayName", "GetTransformOrigin" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
		{ "ToolTip", "Get the transform from which all absolute component transform sections should be relative. Scale is ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTransformOrigin, nullptr, "BP_GetTransformOrigin", nullptr, nullptr, sizeof(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms), Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOrigin);
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister()
	{
		return UMovieSceneTransformOrigin::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin, "BP_GetTransformOrigin" }, // 3034716930
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Transform Origin" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTransformOrigin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams = {
		&UMovieSceneTransformOrigin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTransformOrigin.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOrigin>()
	{
		return UMovieSceneTransformOrigin::StaticClass();
	}
	UMovieSceneTransformOrigin::UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOrigin);
	UMovieSceneTransformOrigin::~UMovieSceneTransformOrigin() {}
	static FName NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin = FName(TEXT("BP_GetTransformOrigin"));
	FTransform IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass()));
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTransformOrigin, UMovieSceneTransformOrigin::StaticClass, TEXT("UMovieSceneTransformOrigin"), &Z_Registration_Info_UClass_UMovieSceneTransformOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOrigin), 2381504017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_1685982012(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
