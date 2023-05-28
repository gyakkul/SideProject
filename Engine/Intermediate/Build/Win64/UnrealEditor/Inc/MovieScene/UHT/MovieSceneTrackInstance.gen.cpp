// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput;
class UScriptStruct* FMovieSceneTrackInstanceInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackInstanceInput"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackInstanceInput>()
{
	return FMovieSceneTrackInstanceInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackInstanceInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData[] = {
		{ "Comment", "/** The section that acts as an input for this animator */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "The section that acts as an input for this animator" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTrackInstanceInput, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackInstanceInput",
		sizeof(FMovieSceneTrackInstanceInput),
		alignof(FMovieSceneTrackInstanceInput),
		Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput.InnerSingleton;
	}
	void UMovieSceneTrackInstance::StaticRegisterNativesUMovieSceneTrackInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackInstance);
	UClass* Z_Construct_UClass_UMovieSceneTrackInstance_NoRegister()
	{
		return UMovieSceneTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimatedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootTrackInstance_MetaData[];
#endif
		static void NewProp_bIsRootTrackInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootTrackInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateLinker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrivateLinker;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all track instances. Can also be used for root tracks where AnimatedObject will be nullptr\n */" },
		{ "IncludePath", "EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
		{ "ToolTip", "Base class for all track instances. Can also be used for root tracks where AnimatedObject will be nullptr" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject = { "AnimatedObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrackInstance, AnimatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_SetBit(void* Obj)
	{
		((UMovieSceneTrackInstance*)Obj)->bIsRootTrackInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance = { "bIsRootTrackInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneTrackInstance), &Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker = { "PrivateLinker", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrackInstance, PrivateLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 599563984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTrackInstance, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_MetaData)) }; // 599563984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_AnimatedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_bIsRootTrackInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_PrivateLinker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTrackInstance_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams = {
		&UMovieSceneTrackInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackInstance()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackInstance.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackInstance>()
	{
		return UMovieSceneTrackInstance::StaticClass();
	}
	UMovieSceneTrackInstance::UMovieSceneTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackInstance);
	UMovieSceneTrackInstance::~UMovieSceneTrackInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTrackInstanceInput::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput_Statics::NewStructOps, TEXT("MovieSceneTrackInstanceInput"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackInstanceInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackInstanceInput), 599563984U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackInstance, UMovieSceneTrackInstance::StaticClass, TEXT("UMovieSceneTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackInstance), 2857363826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_4208231257(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_TrackInstance_MovieSceneTrackInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
