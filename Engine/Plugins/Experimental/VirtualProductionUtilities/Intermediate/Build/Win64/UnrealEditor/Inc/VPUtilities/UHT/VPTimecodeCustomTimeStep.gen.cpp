// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPTimecodeCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPTimecodeCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPTimecodeCustomTimeStep();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPTimecodeCustomTimeStep_NoRegister();
// End Cross Module References
	void UVPTimecodeCustomTimeStep::StaticRegisterNativesUVPTimecodeCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPTimecodeCustomTimeStep);
	UClass* Z_Construct_UClass_UVPTimecodeCustomTimeStep_NoRegister()
	{
		return UVPTimecodeCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bErrorIfFrameAreNotConsecutive_MetaData[];
#endif
		static void NewProp_bErrorIfFrameAreNotConsecutive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bErrorIfFrameAreNotConsecutive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bErrorIfTimecodeProviderChanged_MetaData[];
#endif
		static void NewProp_bErrorIfTimecodeProviderChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bErrorIfTimecodeProviderChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFixedFrameRateCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the engine's time step via the engine's TimecodeProvider.\n * Will sleep and wake up engine when the a new frame is available.\n */" },
		{ "DisplayName", "Timecode Custom Time Step" },
		{ "IncludePath", "VPTimecodeCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VPTimecodeCustomTimeStep.h" },
		{ "ToolTip", "Control the engine's time step via the engine's TimecodeProvider.\nWill sleep and wake up engine when the a new frame is available." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive_MetaData[] = {
		{ "Category", "CustomTimeStep" },
		{ "Comment", "/** If true, stop the CustomTimeStep if the new timecode value doesn't follow the previous timecode value. */" },
		{ "ModuleRelativePath", "Public/VPTimecodeCustomTimeStep.h" },
		{ "ToolTip", "If true, stop the CustomTimeStep if the new timecode value doesn't follow the previous timecode value." },
	};
#endif
	void Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive_SetBit(void* Obj)
	{
		((UVPTimecodeCustomTimeStep*)Obj)->bErrorIfFrameAreNotConsecutive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive = { "bErrorIfFrameAreNotConsecutive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVPTimecodeCustomTimeStep), &Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged_MetaData[] = {
		{ "Category", "CustomTimeStep" },
		{ "Comment", "/** If true, stop the CustomTimeStep if the engine's TimeProvider changed since last frame. */" },
		{ "ModuleRelativePath", "Public/VPTimecodeCustomTimeStep.h" },
		{ "ToolTip", "If true, stop the CustomTimeStep if the engine's TimeProvider changed since last frame." },
	};
#endif
	void Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged_SetBit(void* Obj)
	{
		((UVPTimecodeCustomTimeStep*)Obj)->bErrorIfTimecodeProviderChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged = { "bErrorIfTimecodeProviderChanged", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVPTimecodeCustomTimeStep), &Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "CustomTimeStep" },
		{ "Comment", "/** If the timecode doesn't change after that amount of time, stop the CustomTimeStep. */" },
		{ "ModuleRelativePath", "Public/VPTimecodeCustomTimeStep.h" },
		{ "ToolTip", "If the timecode doesn't change after that amount of time, stop the CustomTimeStep." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPTimecodeCustomTimeStep, MaxDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_MaxDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_MaxDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfFrameAreNotConsecutive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_bErrorIfTimecodeProviderChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::NewProp_MaxDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPTimecodeCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::ClassParams = {
		&UVPTimecodeCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPTimecodeCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UVPTimecodeCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPTimecodeCustomTimeStep.OuterSingleton, Z_Construct_UClass_UVPTimecodeCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPTimecodeCustomTimeStep.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPTimecodeCustomTimeStep>()
	{
		return UVPTimecodeCustomTimeStep::StaticClass();
	}
	UVPTimecodeCustomTimeStep::UVPTimecodeCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPTimecodeCustomTimeStep);
	UVPTimecodeCustomTimeStep::~UVPTimecodeCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPTimecodeCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPTimecodeCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPTimecodeCustomTimeStep, UVPTimecodeCustomTimeStep::StaticClass, TEXT("UVPTimecodeCustomTimeStep"), &Z_Registration_Info_UClass_UVPTimecodeCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPTimecodeCustomTimeStep), 133856626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPTimecodeCustomTimeStep_h_605281550(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPTimecodeCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPTimecodeCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
