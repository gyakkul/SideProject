// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/ControlRigSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSequence() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSequence();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigSequence::StaticRegisterNativesUControlRigSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSequence);
	UClass* Z_Construct_UClass_UControlRigSequence_NoRegister()
	{
		return UControlRigSequence::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExportedToAnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LastExportedToAnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExportedUsingSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LastExportedUsingSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastExportedFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastExportedFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sequencer/ControlRigSequence.h" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequence.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedToAnimationSequence_MetaData[] = {
		{ "Comment", "/** The last animation sequence this control rig sequence was exported to */" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequence.h" },
		{ "ToolTip", "The last animation sequence this control rig sequence was exported to" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedToAnimationSequence = { "LastExportedToAnimationSequence", nullptr, (EPropertyFlags)0x0014010000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigSequence, LastExportedToAnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedToAnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedToAnimationSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedUsingSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The skeletal mesh that was used the last time we exported this sequence */" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequence.h" },
		{ "ToolTip", "The skeletal mesh that was used the last time we exported this sequence" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedUsingSkeletalMesh = { "LastExportedUsingSkeletalMesh", nullptr, (EPropertyFlags)0x0014010000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigSequence, LastExportedUsingSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedUsingSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedUsingSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedFrameRate_MetaData[] = {
		{ "Comment", "/** The frame rate that was used the last time we exported this sequence */" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigSequence.h" },
		{ "ToolTip", "The frame rate that was used the last time we exported this sequence" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedFrameRate = { "LastExportedFrameRate", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigSequence, LastExportedFrameRate), METADATA_PARAMS(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedFrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedToAnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedUsingSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSequence_Statics::NewProp_LastExportedFrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSequence_Statics::ClassParams = {
		&UControlRigSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequence_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSequence()
	{
		if (!Z_Registration_Info_UClass_UControlRigSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSequence.OuterSingleton, Z_Construct_UClass_UControlRigSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSequence.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigSequence>()
	{
		return UControlRigSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSequence);
	UControlRigSequence::~UControlRigSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSequence, UControlRigSequence::StaticClass, TEXT("UControlRigSequence"), &Z_Registration_Info_UClass_UControlRigSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSequence), 3096785363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequence_h_2724465741(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
