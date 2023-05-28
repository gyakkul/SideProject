// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecordingBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecordingBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void USequenceRecordingBase::StaticRegisterNativesUSequenceRecordingBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRecordingBase);
	UClass* Z_Construct_UClass_USequenceRecordingBase_NoRegister()
	{
		return USequenceRecordingBase::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecordingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecordingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecordingBase.h" },
		{ "ModuleRelativePath", "Public/SequenceRecordingBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecordingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecordingBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecordingBase_Statics::ClassParams = {
		&USequenceRecordingBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecordingBase()
	{
		if (!Z_Registration_Info_UClass_USequenceRecordingBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRecordingBase.OuterSingleton, Z_Construct_UClass_USequenceRecordingBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceRecordingBase.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecordingBase>()
	{
		return USequenceRecordingBase::StaticClass();
	}
	USequenceRecordingBase::USequenceRecordingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecordingBase);
	USequenceRecordingBase::~USequenceRecordingBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRecordingBase, USequenceRecordingBase::StaticClass, TEXT("USequenceRecordingBase"), &Z_Registration_Info_UClass_USequenceRecordingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRecordingBase), 1044110576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_2341210020(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecordingBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
