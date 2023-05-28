// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultLevelSequenceInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultLevelSequenceInstanceData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	void UDefaultLevelSequenceInstanceData::StaticRegisterNativesUDefaultLevelSequenceInstanceData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultLevelSequenceInstanceData);
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData_NoRegister()
	{
		return UDefaultLevelSequenceInstanceData::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformOriginActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformOriginActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin. */" },
		{ "IncludePath", "DefaultLevelSequenceInstanceData.h" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When set, this actor's world position will be used as the transform origin for all absolute transform sections */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "When set, this actor's world position will be used as the transform origin for all absolute transform sections" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor = { "TransformOriginActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOriginActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies a transform that offsets all absolute transform sections in this sequence. Scale is ignored. Not applied to Relative or Additive sections. */" },
		{ "ModuleRelativePath", "Public/DefaultLevelSequenceInstanceData.h" },
		{ "ToolTip", "Specifies a transform that offsets all absolute transform sections in this sequence. Scale is ignored. Not applied to Relative or Additive sections." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin = { "TransformOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultLevelSequenceInstanceData, TransformOrigin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOriginActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::NewProp_TransformOrigin,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister, (int32)VTABLE_OFFSET(UDefaultLevelSequenceInstanceData, IMovieSceneTransformOrigin), false },  // 2381504017
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultLevelSequenceInstanceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams = {
		&UDefaultLevelSequenceInstanceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultLevelSequenceInstanceData()
	{
		if (!Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton, Z_Construct_UClass_UDefaultLevelSequenceInstanceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<UDefaultLevelSequenceInstanceData>()
	{
		return UDefaultLevelSequenceInstanceData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultLevelSequenceInstanceData);
	UDefaultLevelSequenceInstanceData::~UDefaultLevelSequenceInstanceData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultLevelSequenceInstanceData, UDefaultLevelSequenceInstanceData::StaticClass, TEXT("UDefaultLevelSequenceInstanceData"), &Z_Registration_Info_UClass_UDefaultLevelSequenceInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultLevelSequenceInstanceData), 3337953464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_287934343(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_DefaultLevelSequenceInstanceData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
