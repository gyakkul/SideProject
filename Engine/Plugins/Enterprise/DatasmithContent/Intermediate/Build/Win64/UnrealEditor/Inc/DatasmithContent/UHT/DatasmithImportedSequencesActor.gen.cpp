// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithImportedSequencesActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithImportedSequencesActor() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	DEFINE_FUNCTION(ADatasmithImportedSequencesActor::execPlayLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_SequenceToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLevelSequence(Z_Param_SequenceToPlay);
		P_NATIVE_END;
	}
	void ADatasmithImportedSequencesActor::StaticRegisterNativesADatasmithImportedSequencesActor()
	{
		UClass* Class = ADatasmithImportedSequencesActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayLevelSequence", &ADatasmithImportedSequencesActor::execPlayLevelSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics
	{
		struct DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms
		{
			ULevelSequence* SequenceToPlay;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::NewProp_SequenceToPlay = { "SequenceToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms, SequenceToPlay), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::NewProp_SequenceToPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImportedSequences" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithImportedSequencesActor, nullptr, "PlayLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::DatasmithImportedSequencesActor_eventPlayLevelSequence_Parms), Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatasmithImportedSequencesActor);
	UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor_NoRegister()
	{
		return ADatasmithImportedSequencesActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedSequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedSequences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADatasmithImportedSequencesActor_PlayLevelSequence, "PlayLevelSequence" }, // 2245369517
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithImportedSequencesActor.h" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_Inner = { "ImportedSequences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData[] = {
		{ "Category", "ImportedSequences" },
		{ "ModuleRelativePath", "Public/DatasmithImportedSequencesActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences = { "ImportedSequences", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithImportedSequencesActor, ImportedSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::NewProp_ImportedSequences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithImportedSequencesActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::ClassParams = {
		&ADatasmithImportedSequencesActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithImportedSequencesActor()
	{
		if (!Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton, Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithImportedSequencesActor>()
	{
		return ADatasmithImportedSequencesActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithImportedSequencesActor);
	ADatasmithImportedSequencesActor::~ADatasmithImportedSequencesActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADatasmithImportedSequencesActor, ADatasmithImportedSequencesActor::StaticClass, TEXT("ADatasmithImportedSequencesActor"), &Z_Registration_Info_UClass_ADatasmithImportedSequencesActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatasmithImportedSequencesActor), 1627806826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h_3951875334(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithImportedSequencesActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
