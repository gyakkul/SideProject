// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimBoneCompressionSettings::StaticRegisterNativesUAnimBoneCompressionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBoneCompressionSettings);
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister()
	{
		return UAnimBoneCompressionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codecs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Codecs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Codecs;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[];
#endif
		static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This object is used to wrap a bone compression codec. It allows a clean integration in the editor by avoiding the need\n * to create asset types and factory wrappers for every codec.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimBoneCompressionSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "* This object is used to wrap a bone compression codec. It allows a clean integration in the editor by avoiding the need\n* to create asset types and factory wrappers for every codec." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner = { "Codecs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBoneCompressionSettings, Codecs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When compressing, the best codec below this error threshold will be used. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "When compressing, the best codec below this error threshold will be used." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold = { "ErrorThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBoneCompressionSettings, ErrorThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Any codec (even one that increases the size) with a lower error will be used until it falls below the threshold. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "Any codec (even one that increases the size) with a lower error will be used until it falls below the threshold." },
	};
#endif
	void Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
	{
		((UAnimBoneCompressionSettings*)Obj)->bForceBelowThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBoneCompressionSettings), &Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::ClassParams = {
		&UAnimBoneCompressionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton, Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBoneCompressionSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimBoneCompressionSettings>()
	{
		return UAnimBoneCompressionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionSettings);
	UAnimBoneCompressionSettings::~UAnimBoneCompressionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBoneCompressionSettings, UAnimBoneCompressionSettings::StaticClass, TEXT("UAnimBoneCompressionSettings"), &Z_Registration_Info_UClass_UAnimBoneCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBoneCompressionSettings), 3409026805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_3582005871(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBoneCompressionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
