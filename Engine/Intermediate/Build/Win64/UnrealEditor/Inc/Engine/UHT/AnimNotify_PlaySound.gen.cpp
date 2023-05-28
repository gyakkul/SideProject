// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlaySound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_PlaySound::StaticRegisterNativesUAnimNotify_PlaySound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlaySound);
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister()
	{
		return UAnimNotify_PlaySound::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlaySound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewIgnoreAttenuation_MetaData[];
#endif
		static void NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewIgnoreAttenuation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlaySound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Sound" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Sound to Play\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Sound to Play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0015000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// If this sound should follow its owner\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "If this sound should follow its owner" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((UAnimNotify_PlaySound*)Obj)->bFollow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlaySound), &Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit(void* Obj)
	{
		((UAnimNotify_PlaySound*)Obj)->bPreviewIgnoreAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation = { "bPreviewIgnoreAttenuation", nullptr, (EPropertyFlags)0x0010000800004011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlaySound), &Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Socket or bone name to attach sound to\n" },
		{ "EditCondition", "bFollow" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Socket or bone name to attach sound to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlaySound, AttachName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bPreviewIgnoreAttenuation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlaySound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlaySound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::ClassParams = {
		&UAnimNotify_PlaySound::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers),
		0,
		0x001120A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlaySound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlaySound.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_PlaySound>()
	{
		return UAnimNotify_PlaySound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlaySound);
	UAnimNotify_PlaySound::~UAnimNotify_PlaySound() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlaySound, UAnimNotify_PlaySound::StaticClass, TEXT("UAnimNotify_PlaySound"), &Z_Registration_Info_UClass_UAnimNotify_PlaySound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlaySound), 1771126509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h_2115772414(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlaySound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
