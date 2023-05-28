// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerKeyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerKeyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_ASequencerKeyActor();
	SEQUENCER_API UClass* Z_Construct_UClass_ASequencerKeyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void ASequencerKeyActor::StaticRegisterNativesASequencerKeyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASequencerKeyActor);
	UClass* Z_Construct_UClass_ASequencerKeyActor_NoRegister()
	{
		return ASequencerKeyActor::StaticClass();
	}
	struct Z_Construct_UClass_ASequencerKeyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KeyMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASequencerKeyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerKeyActor.h" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData[] = {
		{ "Comment", "/** The key mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The key mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent = { "KeyMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASequencerKeyActor, KeyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData[] = {
		{ "Comment", "/** The actor whose transform was used to build this key */" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The actor whose transform was used to build this key" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor = { "AssociatedActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASequencerKeyActor, AssociatedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData[] = {
		{ "Comment", "/** The track section this key resides on */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The track section this key resides on" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection = { "TrackSection", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASequencerKeyActor, TrackSection), Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData[] = {
		{ "Comment", "/** The time this key is associated with in Sequencer */" },
		{ "ModuleRelativePath", "Private/SequencerKeyActor.h" },
		{ "ToolTip", "The time this key is associated with in Sequencer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime = { "KeyTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASequencerKeyActor, KeyTime), METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_AssociatedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_TrackSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerKeyActor_Statics::NewProp_KeyTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASequencerKeyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASequencerKeyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASequencerKeyActor_Statics::ClassParams = {
		&ASequencerKeyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerKeyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASequencerKeyActor()
	{
		if (!Z_Registration_Info_UClass_ASequencerKeyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASequencerKeyActor.OuterSingleton, Z_Construct_UClass_ASequencerKeyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASequencerKeyActor.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<ASequencerKeyActor>()
	{
		return ASequencerKeyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequencerKeyActor);
	ASequencerKeyActor::~ASequencerKeyActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASequencerKeyActor, ASequencerKeyActor::StaticClass, TEXT("ASequencerKeyActor"), &Z_Registration_Info_UClass_ASequencerKeyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASequencerKeyActor), 3243573673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_3342121159(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_SequencerKeyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
