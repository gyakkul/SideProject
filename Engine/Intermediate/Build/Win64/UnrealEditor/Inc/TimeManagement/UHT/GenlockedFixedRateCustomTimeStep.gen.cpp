// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GenlockedFixedRateCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedFixedRateCustomTimeStep() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedFixedRateCustomTimeStep::StaticRegisterNativesUGenlockedFixedRateCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedFixedRateCustomTimeStep);
	UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister()
	{
		return UGenlockedFixedRateCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBlock_MetaData[];
#endif
		static void NewProp_bShouldBlock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSingleFrameDeltaTime_MetaData[];
#endif
		static void NewProp_bForceSingleFrameDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSingleFrameDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via a fixed frame rate.\n * \n * Philosophy:\n * \n *   * Quantized increments but keeping up with platform time.\n * \n *   * FApp::GetDeltaTime \n *       - Forced to a multiple of the desired FrameTime.\n * \n *   * FApp::GetCurrentTime\n *       - Incremented in multiples of the desired FrameTime.\n *       - Corresponds to platform time minus any fractional FrameTime.\n * \n */" },
		{ "DisplayName", "Genlocked Fixed Rate" },
		{ "IncludePath", "GenlockedFixedRateCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via a fixed frame rate.\n\nPhilosophy:\n\n  * Quantized increments but keeping up with platform time.\n\n  * FApp::GetDeltaTime\n      - Forced to a multiple of the desired FrameTime.\n\n  * FApp::GetCurrentTime\n      - Incremented in multiples of the desired FrameTime.\n      - Corresponds to platform time minus any fractional FrameTime." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Desired frame rate */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Desired frame rate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenlockedFixedRateCustomTimeStep, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** Indicates that this custom time step should block to enforce the specified frame rate. Set to false if this is enforced elsewhere. */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "Indicates that this custom time step should block to enforce the specified frame rate. Set to false if this is enforced elsewhere." },
	};
#endif
	void Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_SetBit(void* Obj)
	{
		((UGenlockedFixedRateCustomTimeStep*)Obj)->bShouldBlock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock = { "bShouldBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenlockedFixedRateCustomTimeStep), &Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_MetaData[] = {
		{ "Category", "Timing" },
		{ "Comment", "/** When true, delta time will always be 1/FrameRate, regardless of how much real time has elapsed */" },
		{ "ModuleRelativePath", "Public/GenlockedFixedRateCustomTimeStep.h" },
		{ "ToolTip", "When true, delta time will always be 1/FrameRate, regardless of how much real time has elapsed" },
	};
#endif
	void Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_SetBit(void* Obj)
	{
		((UGenlockedFixedRateCustomTimeStep*)Obj)->bForceSingleFrameDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime = { "bForceSingleFrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenlockedFixedRateCustomTimeStep), &Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bShouldBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::NewProp_bForceSingleFrameDeltaTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedFixedRateCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams = {
		&UGenlockedFixedRateCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton, Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedFixedRateCustomTimeStep>()
	{
		return UGenlockedFixedRateCustomTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedFixedRateCustomTimeStep);
	UGenlockedFixedRateCustomTimeStep::~UGenlockedFixedRateCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep, UGenlockedFixedRateCustomTimeStep::StaticClass, TEXT("UGenlockedFixedRateCustomTimeStep"), &Z_Registration_Info_UClass_UGenlockedFixedRateCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedFixedRateCustomTimeStep), 2756241182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_683983177(TEXT("/Script/TimeManagement"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
