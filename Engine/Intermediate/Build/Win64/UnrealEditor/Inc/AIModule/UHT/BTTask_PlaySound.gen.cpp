// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_PlaySound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlaySound() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_PlaySound::StaticRegisterNativesUBTTask_PlaySound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PlaySound);
	UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister()
	{
		return UBTTask_PlaySound::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlaySound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlaySound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Play Sound task node.\n * Plays the specified sound when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "Play Sound task node.\nPlays the specified sound when executed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** CUE to play */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "CUE to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PlaySound, SoundToPlay), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlaySound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlaySound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams = {
		&UBTTask_PlaySound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlaySound()
	{
		if (!Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton, Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_PlaySound.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PlaySound>()
	{
		return UBTTask_PlaySound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlaySound);
	UBTTask_PlaySound::~UBTTask_PlaySound() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PlaySound, UBTTask_PlaySound::StaticClass, TEXT("UBTTask_PlaySound"), &Z_Registration_Info_UClass_UBTTask_PlaySound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PlaySound), 216346850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_1866925022(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PlaySound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
