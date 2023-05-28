// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EvaluateSequenceAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluateSequenceAnimInstance() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimToTexture();
// End Cross Module References
	void UEvaluateSequenceAnimInstance::StaticRegisterNativesUEvaluateSequenceAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEvaluateSequenceAnimInstance);
	UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister()
	{
		return UEvaluateSequenceAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceToEvaluate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceToEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToEvaluate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToEvaluate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple anim instance with a few parameters to be used as inputs when driving it\n * from UAnimToTextureBPLibrary::AnimationToTexture()\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EvaluateSequenceAnimInstance.h" },
		{ "ModuleRelativePath", "Public/EvaluateSequenceAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple anim instance with a few parameters to be used as inputs when driving it\nfrom UAnimToTextureBPLibrary::AnimationToTexture()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/EvaluateSequenceAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate = { "SequenceToEvaluate", nullptr, (EPropertyFlags)0x0014000000002015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, SequenceToEvaluate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/EvaluateSequenceAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate = { "TimeToEvaluate", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, TimeToEvaluate), METADATA_PARAMS(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluateSequenceAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams = {
		&UEvaluateSequenceAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton, Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UClass* StaticClass<UEvaluateSequenceAnimInstance>()
	{
		return UEvaluateSequenceAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluateSequenceAnimInstance);
	UEvaluateSequenceAnimInstance::~UEvaluateSequenceAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_EvaluateSequenceAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_EvaluateSequenceAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEvaluateSequenceAnimInstance, UEvaluateSequenceAnimInstance::StaticClass, TEXT("UEvaluateSequenceAnimInstance"), &Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEvaluateSequenceAnimInstance), 3432547185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_EvaluateSequenceAnimInstance_h_4189686516(TEXT("/Script/AnimToTexture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_EvaluateSequenceAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_EvaluateSequenceAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
