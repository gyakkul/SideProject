// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profile/MediaProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaProfile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfile();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfile_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	void UMediaProfile::StaticRegisterNativesUMediaProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaProfile);
	UClass* Z_Construct_UClass_UMediaProfile_NoRegister()
	{
		return UMediaProfile::StaticClass();
	}
	struct Z_Construct_UClass_UMediaProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSources_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTimecodeProvider_MetaData[];
#endif
		static void NewProp_bOverrideTimecodeProvider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCustomTimeStep_MetaData[];
#endif
		static void NewProp_bOverrideCustomTimeStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedTimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedTimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousTimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedCustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedCustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousCustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousCustomTimeStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A media profile that configures the inputs, outputs, timecode provider and custom time step.\n */" },
		{ "IncludePath", "Profile/MediaProfile.h" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "A media profile that configures the inputs, outputs, timecode provider and custom time step." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_Inner_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** Media sources. */" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Media sources." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_Inner = { "MediaSources", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** Media sources. */" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Media sources." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources = { "MediaSources", nullptr, (EPropertyFlags)0x0024088000000049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, MediaSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_Inner_MetaData[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** Media outputs. */" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Media outputs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_Inner = { "MediaOutputs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_MetaData[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** Media outputs. */" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Media outputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs = { "MediaOutputs", nullptr, (EPropertyFlags)0x0024088000000049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, MediaOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_MetaData[] = {
		{ "Category", "Timecode Provider" },
		{ "Comment", "/** Override the Engine's Timecode provider defined in the project settings. */" },
		{ "DisplayName", "Override Project Settings" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Override the Engine's Timecode provider defined in the project settings." },
	};
#endif
	void Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_SetBit(void* Obj)
	{
		((UMediaProfile*)Obj)->bOverrideTimecodeProvider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider = { "bOverrideTimecodeProvider", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaProfile), &Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_TimecodeProvider_MetaData[] = {
		{ "Category", "Timecode Provider" },
		{ "Comment", "/** Timecode provider. */" },
		{ "EditCondition", "bOverrideTimecodeProvider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Timecode provider." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_TimecodeProvider = { "TimecodeProvider", nullptr, (EPropertyFlags)0x0026080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, TimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_TimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_TimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_MetaData[] = {
		{ "Category", "Genlock" },
		{ "Comment", "/** Override the Engine's Custom time step defined in the project settings. */" },
		{ "DisplayName", "Override Project Settings" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Override the Engine's Custom time step defined in the project settings." },
	};
#endif
	void Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_SetBit(void* Obj)
	{
		((UMediaProfile*)Obj)->bOverrideCustomTimeStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep = { "bOverrideCustomTimeStep", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaProfile), &Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_CustomTimeStep_MetaData[] = {
		{ "Category", "Genlock" },
		{ "Comment", "/** Custom time step */" },
		{ "EditCondition", "bOverrideCustomTimeStep" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
		{ "ToolTip", "Custom time step" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_CustomTimeStep = { "CustomTimeStep", nullptr, (EPropertyFlags)0x0026080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, CustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_CustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_CustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedTimecodeProvider = { "AppliedTimecodeProvider", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, AppliedTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousTimecodeProvider = { "PreviousTimecodeProvider", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, PreviousTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedCustomTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedCustomTimeStep = { "AppliedCustomTimeStep", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, AppliedCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousCustomTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Profile/MediaProfile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousCustomTimeStep = { "PreviousCustomTimeStep", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaProfile, PreviousCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousCustomTimeStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_MediaOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideTimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_TimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_bOverrideCustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_CustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedTimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousTimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_AppliedCustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaProfile_Statics::NewProp_PreviousCustomTimeStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaProfile_Statics::ClassParams = {
		&UMediaProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaProfile()
	{
		if (!Z_Registration_Info_UClass_UMediaProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaProfile.OuterSingleton, Z_Construct_UClass_UMediaProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaProfile.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaProfile>()
	{
		return UMediaProfile::StaticClass();
	}
	UMediaProfile::UMediaProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaProfile);
	UMediaProfile::~UMediaProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaProfile, UMediaProfile::StaticClass, TEXT("UMediaProfile"), &Z_Registration_Info_UClass_UMediaProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaProfile), 3109689398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_2113334129(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
