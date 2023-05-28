// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/ControlRigLayerInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigLayerInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigLayerInstance();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigLayerInstance::StaticRegisterNativesUControlRigLayerInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigLayerInstance);
	UClass* Z_Construct_UClass_UControlRigLayerInstance_NoRegister()
	{
		return UControlRigLayerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigLayerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigLayerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigLayerInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Sequencer/ControlRigLayerInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Sequencer/ControlRigLayerInstance.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRigLayerInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USequencerAnimationSupport_NoRegister, (int32)VTABLE_OFFSET(UControlRigLayerInstance, ISequencerAnimationSupport), false },  // 3061716723
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigLayerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigLayerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigLayerInstance_Statics::ClassParams = {
		&UControlRigLayerInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlRigLayerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigLayerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigLayerInstance()
	{
		if (!Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton, Z_Construct_UClass_UControlRigLayerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigLayerInstance.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigLayerInstance>()
	{
		return UControlRigLayerInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigLayerInstance);
	UControlRigLayerInstance::~UControlRigLayerInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigLayerInstance, UControlRigLayerInstance::StaticClass, TEXT("UControlRigLayerInstance"), &Z_Registration_Info_UClass_UControlRigLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigLayerInstance), 2745948240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_3427267095(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_ControlRigLayerInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
