// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResistanceMotorSimComponent.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResistanceMotorSimComponent() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UResistanceMotorSimComponent();
	AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* Z_Construct_UClass_UResistanceMotorSimComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSimStandardComponents();
// End Cross Module References
	void UResistanceMotorSimComponent::StaticRegisterNativesUResistanceMotorSimComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResistanceMotorSimComponent);
	UClass* Z_Construct_UClass_UResistanceMotorSimComponent_NoRegister()
	{
		return UResistanceMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UResistanceMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpSpeedMaxFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpSpeedMaxFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideSpeedFrictionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SideSpeedFrictionCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResistanceMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioMotorSimComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSimStandardComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResistanceMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioMotorSim" },
		{ "Comment", "// Applys additional surface friction based on the angle of the vehicle's velocity\n" },
		{ "IncludePath", "ResistanceMotorSimComponent.h" },
		{ "ModuleRelativePath", "Public/ResistanceMotorSimComponent.h" },
		{ "ToolTip", "Applys additional surface friction based on the angle of the vehicle's velocity" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_UpSpeedMaxFriction_MetaData[] = {
		{ "Category", "Resistance" },
		{ "Comment", "// How much to increase surface friction when driving straight up. Scales linearly based on driving angle.\n" },
		{ "ModuleRelativePath", "Public/ResistanceMotorSimComponent.h" },
		{ "ToolTip", "How much to increase surface friction when driving straight up. Scales linearly based on driving angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_UpSpeedMaxFriction = { "UpSpeedMaxFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResistanceMotorSimComponent, UpSpeedMaxFriction), METADATA_PARAMS(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_UpSpeedMaxFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_UpSpeedMaxFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Resistance" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Minimum speed to apply this extra resistance\n" },
		{ "ModuleRelativePath", "Public/ResistanceMotorSimComponent.h" },
		{ "ToolTip", "Minimum speed to apply this extra resistance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResistanceMotorSimComponent, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_SideSpeedFrictionCurve_MetaData[] = {
		{ "Category", "Resistance" },
		{ "Comment", "// Additional friction to add based on lateral speed\n" },
		{ "ModuleRelativePath", "Public/ResistanceMotorSimComponent.h" },
		{ "ToolTip", "Additional friction to add based on lateral speed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_SideSpeedFrictionCurve = { "SideSpeedFrictionCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UResistanceMotorSimComponent, SideSpeedFrictionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_SideSpeedFrictionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_SideSpeedFrictionCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResistanceMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_UpSpeedMaxFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResistanceMotorSimComponent_Statics::NewProp_SideSpeedFrictionCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResistanceMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResistanceMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResistanceMotorSimComponent_Statics::ClassParams = {
		&UResistanceMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResistanceMotorSimComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResistanceMotorSimComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResistanceMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UResistanceMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResistanceMotorSimComponent.OuterSingleton, Z_Construct_UClass_UResistanceMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResistanceMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIMSTANDARDCOMPONENTS_API UClass* StaticClass<UResistanceMotorSimComponent>()
	{
		return UResistanceMotorSimComponent::StaticClass();
	}
	UResistanceMotorSimComponent::UResistanceMotorSimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResistanceMotorSimComponent);
	UResistanceMotorSimComponent::~UResistanceMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResistanceMotorSimComponent, UResistanceMotorSimComponent::StaticClass, TEXT("UResistanceMotorSimComponent"), &Z_Registration_Info_UClass_UResistanceMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResistanceMotorSimComponent), 249070436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_1446264274(TEXT("/Script/AudioMotorSimStandardComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSimStandardComponents_Public_ResistanceMotorSimComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
