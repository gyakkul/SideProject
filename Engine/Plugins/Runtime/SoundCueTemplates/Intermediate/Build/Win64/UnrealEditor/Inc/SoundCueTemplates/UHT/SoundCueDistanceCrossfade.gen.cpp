// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueDistanceCrossfade.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeDistanceCrossFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueDistanceCrossfade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueDistanceCrossfade();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueDistanceCrossfade_NoRegister();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate();
	SOUNDCUETEMPLATES_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo();
	UPackage* Z_Construct_UPackage__Script_SoundCueTemplates();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo;
class UScriptStruct* FSoundCueCrossfadeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo, (UObject*)Z_Construct_UPackage__Script_SoundCueTemplates(), TEXT("SoundCueCrossfadeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.OuterSingleton;
}
template<> SOUNDCUETEMPLATES_API UScriptStruct* StaticStruct<FSoundCueCrossfadeInfo>()
{
	return FSoundCueCrossfadeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// USoundCueDistanceCrossfade\n// Sound Cue template class which implements USoundCueTemplate.\n//\n// Simple near/distant mix design for provided, spatialized sounds.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
		{ "ToolTip", "USoundCueDistanceCrossfade\nSound Cue template class which implements USoundCueTemplate.\n\nSimple near/distant mix design for provided, spatialized sounds." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueCrossfadeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_DistanceInfo_MetaData[] = {
		{ "Category", "Crossfade Info" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_DistanceInfo = { "DistanceInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueCrossfadeInfo, DistanceInfo), Z_Construct_UScriptStruct_FDistanceDatum, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_DistanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_DistanceInfo_MetaData)) }; // 2145468178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Crossfade Info" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueCrossfadeInfo, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_DistanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
		nullptr,
		&NewStructOps,
		"SoundCueCrossfadeInfo",
		sizeof(FSoundCueCrossfadeInfo),
		alignof(FSoundCueCrossfadeInfo),
		Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo.InnerSingleton;
	}
	void USoundCueDistanceCrossfade::StaticRegisterNativesUSoundCueDistanceCrossfade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueDistanceCrossfade);
	UClass* Z_Construct_UClass_USoundCueDistanceCrossfade_NoRegister()
	{
		return USoundCueDistanceCrossfade::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueDistanceCrossfade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCueTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object object Object" },
		{ "IncludePath", "SoundCueDistanceCrossfade.h" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
	};
#endif
	void Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundCueDistanceCrossfade*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundCueDistanceCrossfade), &Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations_Inner = { "Variations", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo, METADATA_PARAMS(nullptr, 0) }; // 4010496458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "Public/SoundCueDistanceCrossfade.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueDistanceCrossfade, Variations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations_MetaData)) }; // 4010496458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::NewProp_Variations,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueDistanceCrossfade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::ClassParams = {
		&USoundCueDistanceCrossfade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueDistanceCrossfade()
	{
		if (!Z_Registration_Info_UClass_USoundCueDistanceCrossfade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueDistanceCrossfade.OuterSingleton, Z_Construct_UClass_USoundCueDistanceCrossfade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueDistanceCrossfade.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATES_API UClass* StaticClass<USoundCueDistanceCrossfade>()
	{
		return USoundCueDistanceCrossfade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueDistanceCrossfade);
	USoundCueDistanceCrossfade::~USoundCueDistanceCrossfade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ScriptStructInfo[] = {
		{ FSoundCueCrossfadeInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundCueCrossfadeInfo_Statics::NewStructOps, TEXT("SoundCueCrossfadeInfo"), &Z_Registration_Info_UScriptStruct_SoundCueCrossfadeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueCrossfadeInfo), 4010496458U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueDistanceCrossfade, USoundCueDistanceCrossfade::StaticClass, TEXT("USoundCueDistanceCrossfade"), &Z_Registration_Info_UClass_USoundCueDistanceCrossfade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueDistanceCrossfade), 773953070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_3318820991(TEXT("/Script/SoundCueTemplates"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueDistanceCrossfade_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
