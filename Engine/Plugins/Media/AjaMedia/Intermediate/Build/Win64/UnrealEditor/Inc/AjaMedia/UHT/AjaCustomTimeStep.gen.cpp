// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaCustomTimeStep.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaCustomTimeStep() {}
// Cross Module References
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaCustomTimeStep();
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaCustomTimeStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	void UAjaCustomTimeStep::StaticRegisterNativesUAjaCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaCustomTimeStep);
	UClass* Z_Construct_UClass_UAjaCustomTimeStep_NoRegister()
	{
		return UAjaCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UAjaCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseReferenceIn_MetaData[];
#endif
		static void NewProp_bUseReferenceIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseReferenceIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForFrameToBeReady_MetaData[];
#endif
		static void NewProp_bWaitForFrameToBeReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForFrameToBeReady;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
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
	UObject* (*const Z_Construct_UClass_UAjaCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via the AJA card.\n * When the signal is lost in the editor (not in PIE), the CustomTimeStep will try to re-synchronize every second.\n */" },
		{ "DisplayName", "AJA SDI Input" },
		{ "IncludePath", "AjaCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "MediaIOCustomLayout", "AJA" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via the AJA card.\nWhen the signal is lost in the editor (not in PIE), the CustomTimeStep will try to re-synchronize every second." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn_MetaData[] = {
		{ "Category", "Genlock" },
		{ "Comment", "/**\n\x09 * If true, the Engine will wait for a signal coming in from the Reference In pin.\n\x09 * It will also configure the card Genlock mode and configure the selected Media Port as an output.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "If true, the Engine will wait for a signal coming in from the Reference In pin.\nIt will also configure the card Genlock mode and configure the selected Media Port as an output." },
	};
#endif
	void Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn_SetBit(void* Obj)
	{
		((UAjaCustomTimeStep*)Obj)->bUseReferenceIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn = { "bUseReferenceIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaCustomTimeStep), &Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Genlock" },
		{ "Comment", "/** The device, port and video settings that correspond to where the Genlock signal will be coming from */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "The device, port and video settings that correspond to where the Genlock signal will be coming from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaCustomTimeStep, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/**\n\x09 * If true, the Engine will wait for the frame to be read.\n\x09 * This will introduce random latency (the time it takes to read a frame).\n     * Use this option when you want to synchronize the engine with the incoming frame and discard the buffered frames.\n     * @note If false, there is no guarantee that the incoming frame will be ready since it takes some time to read a frame.\n     * @note This will not work as intended with interlaced transport because both fields are processed at the same time.\n\x09 */" },
		{ "EditCondition", "!bUseReferenceIn" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "If true, the Engine will wait for the frame to be read.\nThis will introduce random latency (the time it takes to read a frame).\nUse this option when you want to synchronize the engine with the incoming frame and discard the buffered frames.\n@note If false, there is no guarantee that the incoming frame will be ready since it takes some time to read a frame.\n@note This will not work as intended with interlaced transport because both fields are processed at the same time." },
	};
#endif
	void Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady_SetBit(void* Obj)
	{
		((UAjaCustomTimeStep*)Obj)->bWaitForFrameToBeReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady = { "bWaitForFrameToBeReady", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaCustomTimeStep), &Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/** The type of Timecode to read from SDI stream. */" },
		{ "EditCondition", "!bUseReferenceIn" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "The type of Timecode to read from SDI stream." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaCustomTimeStep, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/** Enable mechanism to detect Engine loop overrunning the source */" },
		{ "DisplayName", "Display Dropped Frames Warning" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "Enable mechanism to detect Engine loop overrunning the source" },
	};
#endif
	void Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit(void* Obj)
	{
		((UAjaCustomTimeStep*)Obj)->bEnableOverrunDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection = { "bEnableOverrunDetection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaCustomTimeStep), &Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData[] = {
		{ "Comment", "/** Engine used to initialize the CustomTimeStep */" },
		{ "ModuleRelativePath", "Public/AjaCustomTimeStep.h" },
		{ "ToolTip", "Engine used to initialize the CustomTimeStep" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_InitializedEngine = { "InitializedEngine", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaCustomTimeStep, InitializedEngine), Z_Construct_UClass_UEngine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_InitializedEngine_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAjaCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bUseReferenceIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bWaitForFrameToBeReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_TimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_bEnableOverrunDetection,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaCustomTimeStep_Statics::NewProp_InitializedEngine,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaCustomTimeStep_Statics::ClassParams = {
		&UAjaCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAjaCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UAjaCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaCustomTimeStep.OuterSingleton, Z_Construct_UClass_UAjaCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaCustomTimeStep.OuterSingleton;
	}
	template<> AJAMEDIA_API UClass* StaticClass<UAjaCustomTimeStep>()
	{
		return UAjaCustomTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaCustomTimeStep);
	UAjaCustomTimeStep::~UAjaCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaCustomTimeStep, UAjaCustomTimeStep::StaticClass, TEXT("UAjaCustomTimeStep"), &Z_Registration_Info_UClass_UAjaCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaCustomTimeStep), 407703077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_866957313(TEXT("/Script/AjaMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
