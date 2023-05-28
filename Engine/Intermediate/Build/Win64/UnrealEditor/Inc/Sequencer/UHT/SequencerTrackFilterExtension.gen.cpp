// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerTrackFilterExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTrackFilterExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerTrackFilterExtension();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerTrackFilterExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void USequencerTrackFilterExtension::StaticRegisterNativesUSequencerTrackFilterExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerTrackFilterExtension);
	UClass* Z_Construct_UClass_USequencerTrackFilterExtension_NoRegister()
	{
		return USequencerTrackFilterExtension::StaticClass();
	}
	struct Z_Construct_UClass_USequencerTrackFilterExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerTrackFilterExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackFilterExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Override this class in order to make an additional track filter available in Sequencer\n" },
		{ "IncludePath", "SequencerTrackFilterExtension.h" },
		{ "ModuleRelativePath", "Public/SequencerTrackFilterExtension.h" },
		{ "ToolTip", "Override this class in order to make an additional track filter available in Sequencer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerTrackFilterExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerTrackFilterExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerTrackFilterExtension_Statics::ClassParams = {
		&USequencerTrackFilterExtension::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequencerTrackFilterExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackFilterExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerTrackFilterExtension()
	{
		if (!Z_Registration_Info_UClass_USequencerTrackFilterExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerTrackFilterExtension.OuterSingleton, Z_Construct_UClass_USequencerTrackFilterExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerTrackFilterExtension.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<USequencerTrackFilterExtension>()
	{
		return USequencerTrackFilterExtension::StaticClass();
	}
	USequencerTrackFilterExtension::USequencerTrackFilterExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerTrackFilterExtension);
	USequencerTrackFilterExtension::~USequencerTrackFilterExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerTrackFilterExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerTrackFilterExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerTrackFilterExtension, USequencerTrackFilterExtension::StaticClass, TEXT("USequencerTrackFilterExtension"), &Z_Registration_Info_UClass_USequencerTrackFilterExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerTrackFilterExtension), 429050806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerTrackFilterExtension_h_343214532(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerTrackFilterExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerTrackFilterExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
