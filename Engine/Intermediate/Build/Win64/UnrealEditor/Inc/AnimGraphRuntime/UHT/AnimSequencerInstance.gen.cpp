// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequencerInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void UAnimSequencerInstance::StaticRegisterNativesUAnimSequencerInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequencerInstance);
	UClass* Z_Construct_UClass_UAnimSequencerInstance_NoRegister()
	{
		return UAnimSequencerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequencerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequencerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimSequencerInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimSequencerInstance.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimSequencerInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USequencerAnimationSupport_NoRegister, (int32)VTABLE_OFFSET(UAnimSequencerInstance, ISequencerAnimationSupport), false },  // 3061716723
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequencerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequencerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams = {
		&UAnimSequencerInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequencerInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton, Z_Construct_UClass_UAnimSequencerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequencerInstance.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimSequencerInstance>()
	{
		return UAnimSequencerInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequencerInstance);
	UAnimSequencerInstance::~UAnimSequencerInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequencerInstance, UAnimSequencerInstance::StaticClass, TEXT("UAnimSequencerInstance"), &Z_Registration_Info_UClass_UAnimSequencerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequencerInstance), 2608495258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_4021220414(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
