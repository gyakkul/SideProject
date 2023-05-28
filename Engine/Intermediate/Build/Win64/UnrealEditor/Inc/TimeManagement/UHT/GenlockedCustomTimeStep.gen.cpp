// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenlockedCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedCustomTimeStep::StaticRegisterNativesUGenlockedCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedCustomTimeStep);
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectFormat_MetaData[];
#endif
		static void NewProp_bAutoDetectFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFixedFrameRateCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class to control the Engine Timestep from a Genlock signal.\n */" },
		{ "IncludePath", "GenlockedCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine Timestep from a Genlock signal." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_MetaData[] = {
		{ "Comment", "/** Whether this custom time step should autodetect the video format if supported. */" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Whether this custom time step should autodetect the video format if supported." },
	};
#endif
	void Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_SetBit(void* Obj)
	{
		((UGenlockedCustomTimeStep*)Obj)->bAutoDetectFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat = { "bAutoDetectFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenlockedCustomTimeStep), &Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::NewProp_bAutoDetectFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams = {
		&UGenlockedCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton, Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedCustomTimeStep>()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	UGenlockedCustomTimeStep::UGenlockedCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedCustomTimeStep);
	UGenlockedCustomTimeStep::~UGenlockedCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedCustomTimeStep, UGenlockedCustomTimeStep::StaticClass, TEXT("UGenlockedCustomTimeStep"), &Z_Registration_Info_UClass_UGenlockedCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedCustomTimeStep), 1887559756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_949842927(TEXT("/Script/TimeManagement"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
