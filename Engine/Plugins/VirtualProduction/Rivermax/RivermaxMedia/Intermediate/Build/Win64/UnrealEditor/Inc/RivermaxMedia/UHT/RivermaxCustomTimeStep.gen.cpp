// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxCustomTimeStep() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxCustomTimeStep();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_RivermaxMedia();
// End Cross Module References
	void URivermaxCustomTimeStep::StaticRegisterNativesURivermaxCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxCustomTimeStep);
	UClass* Z_Construct_UClass_URivermaxCustomTimeStep_NoRegister()
	{
		return URivermaxCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxCustomTimeStep_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverrunDetection_MetaData[];
#endif
		static void NewProp_bEnableOverrunDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverrunDetection;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializedEngine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitializedEngine;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Genlock using PTP time from a rivermax card\n */" },
		{ "IncludePath", "RivermaxCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RivermaxCustomTimeStep.h" },
		{ "ToolTip", "Genlock using PTP time from a rivermax card" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/** Target frame rate to which to genlock. Uses ST2059 standard to align PTP time to standard genlock */" },
		{ "ModuleRelativePath", "Public/RivermaxCustomTimeStep.h" },
		{ "ToolTip", "Target frame rate to which to genlock. Uses ST2059 standard to align PTP time to standard genlock" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxCustomTimeStep, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/** When enabled, will warn for skipped frames when engine is too slow */" },
		{ "DisplayName", "Display Dropped Frames Warning" },
		{ "ModuleRelativePath", "Public/RivermaxCustomTimeStep.h" },
		{ "ToolTip", "When enabled, will warn for skipped frames when engine is too slow" },
	};
#endif
	void Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit(void* Obj)
	{
		((URivermaxCustomTimeStep*)Obj)->bEnableOverrunDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection = { "bEnableOverrunDetection", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxCustomTimeStep), &Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData[] = {
		{ "Comment", "/** Engine used to initialize the Provider */" },
		{ "ModuleRelativePath", "Public/RivermaxCustomTimeStep.h" },
		{ "ToolTip", "Engine used to initialize the Provider" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_InitializedEngine = { "InitializedEngine", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxCustomTimeStep, InitializedEngine), Z_Construct_UClass_UEngine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivermaxCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_bEnableOverrunDetection,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxCustomTimeStep_Statics::NewProp_InitializedEngine,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxCustomTimeStep_Statics::ClassParams = {
		&URivermaxCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URivermaxCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_URivermaxCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxCustomTimeStep.OuterSingleton, Z_Construct_UClass_URivermaxCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxCustomTimeStep.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UClass* StaticClass<URivermaxCustomTimeStep>()
	{
		return URivermaxCustomTimeStep::StaticClass();
	}
	URivermaxCustomTimeStep::URivermaxCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxCustomTimeStep);
	URivermaxCustomTimeStep::~URivermaxCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxCustomTimeStep, URivermaxCustomTimeStep::StaticClass, TEXT("URivermaxCustomTimeStep"), &Z_Registration_Info_UClass_URivermaxCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxCustomTimeStep), 4150855740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_958024782(TEXT("/Script/RivermaxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
