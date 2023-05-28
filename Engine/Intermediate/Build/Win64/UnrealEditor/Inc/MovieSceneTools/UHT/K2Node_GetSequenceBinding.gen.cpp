// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetSequenceBinding.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetSequenceBinding() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	void UK2Node_GetSequenceBinding::StaticRegisterNativesUK2Node_GetSequenceBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetSequenceBinding);
	UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister()
	{
		return UK2Node_GetSequenceBinding::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSequenceBinding.h" },
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "AllowedClasses", "/Script/MovieScene.MovieSceneSequence" },
		{ "Category", "Sequence" },
		{ "Comment", "/** The sequence from which to choose a binding identifier */" },
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
		{ "ToolTip", "The sequence from which to choose a binding identifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetSequenceBinding, SourceSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "Comment", "/** The user-selected literal binding identifier from the sequence to use */" },
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
		{ "ToolTip", "The user-selected literal binding identifier from the sequence to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_GetSequenceBinding, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSequenceBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::ClassParams = {
		&UK2Node_GetSequenceBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetSequenceBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetSequenceBinding.OuterSingleton, Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetSequenceBinding.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UK2Node_GetSequenceBinding>()
	{
		return UK2Node_GetSequenceBinding::StaticClass();
	}
	UK2Node_GetSequenceBinding::UK2Node_GetSequenceBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSequenceBinding);
	UK2Node_GetSequenceBinding::~UK2Node_GetSequenceBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetSequenceBinding, UK2Node_GetSequenceBinding::StaticClass, TEXT("UK2Node_GetSequenceBinding"), &Z_Registration_Info_UClass_UK2Node_GetSequenceBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetSequenceBinding), 563926214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_3951832444(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_K2Node_GetSequenceBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
