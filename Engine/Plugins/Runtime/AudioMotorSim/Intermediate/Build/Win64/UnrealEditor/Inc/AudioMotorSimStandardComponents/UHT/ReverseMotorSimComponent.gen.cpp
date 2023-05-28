// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReverseMotorSimComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UReverseMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UReverseMotorSimComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	void UReverseMotorSimComponent::StaticRegisterNativesUReverseMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverseMotorSimComponent);
	UClass* Z_Construct_UClass_UReverseMotorSimComponent_NoRegister()
	{
		return UReverseMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReverseMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseEngineResistanceModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseEngineResistanceModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverseMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Scales engine friction when reversing\n" },
		{ "IncludePath", "ReverseMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/ReverseMotorSimComponent.h" },
		{ "ToolTip", "Scales engine friction when reversing" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverseMotorSimComponent_Statics::NewProp_ReverseEngineResistanceModifier_MetaData[] = {
		{ "Category", "Reverse" },
		{ "Comment", "// How much to scale engine friction by when reversing\n" },
		{ "ModuleRelativePath", "Public/ReverseMotorSimComponent.h" },
		{ "ToolTip", "How much to scale engine friction by when reversing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReverseMotorSimComponent_Statics::NewProp_ReverseEngineResistanceModifier = { "ReverseEngineResistanceModifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReverseMotorSimComponent, ReverseEngineResistanceModifier), METADATA_PARAMS(Z_Construct_UClass_UReverseMotorSimComponent_Statics::NewProp_ReverseEngineResistanceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReverseMotorSimComponent_Statics::NewProp_ReverseEngineResistanceModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverseMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverseMotorSimComponent_Statics::NewProp_ReverseEngineResistanceModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverseMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverseMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverseMotorSimComponent_Statics::ClassParams = {
		&UReverseMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReverseMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReverseMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReverseMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReverseMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverseMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UReverseMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverseMotorSimComponent.OuterSingleton, Z_Construct_UClass_UReverseMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReverseMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UReverseMotorSimComponent>()
	{
		return UReverseMotorSimComponent::StaticClass();
	}
	UReverseMotorSimComponent::UReverseMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverseMotorSimComponent);
	UReverseMotorSimComponent::~UReverseMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ReverseMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ReverseMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReverseMotorSimComponent, UReverseMotorSimComponent::StaticClass, TEXT("UReverseMotorSimComponent"), &Z_Registration_Info_UClass_UReverseMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverseMotorSimComponent), 3791608549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ReverseMotorSimComponent_h_2414998951(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ReverseMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ReverseMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
