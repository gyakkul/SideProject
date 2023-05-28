// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicCustomTimeStep.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicCustomTimeStep() {}
// Cross Module References
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicCustomTimeStep();
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicCustomTimeStep_NoRegister();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMedia();
// End Cross Module References
	void UBlackmagicCustomTimeStep::StaticRegisterNativesUBlackmagicCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicCustomTimeStep);
	UClass* Z_Construct_UClass_UBlackmagicCustomTimeStep_NoRegister()
	{
		return UBlackmagicCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverrunDetection_MetaData[];
#endif
		static void NewProp_bEnableOverrunDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverrunDetection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Control the Engine TimeStep via the Blackmagic Design card.\n */" },
		{ "DisplayName", "Blackmagic SDI Input" },
		{ "IncludePath", "BlackmagicCustomTimeStep.h" },
		{ "IsBlueprintBase", "true" },
		{ "MediaIOCustomLayout", "Blackmagic" },
		{ "ModuleRelativePath", "Public/BlackmagicCustomTimeStep.h" },
		{ "ToolTip", "Control the Engine TimeStep via the Blackmagic Design card." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Genlock" },
		{ "Comment", "/** The device, port and video settings that correspond to where the Genlock signal will be coming from */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/BlackmagicCustomTimeStep.h" },
		{ "ToolTip", "The device, port and video settings that correspond to where the Genlock signal will be coming from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicCustomTimeStep, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData[] = {
		{ "Category", "Genlock options" },
		{ "Comment", "/** Enable mechanism to detect Engine loop overrunning the source */" },
		{ "DisplayName", "Display Dropped Frames Warning" },
		{ "ModuleRelativePath", "Public/BlackmagicCustomTimeStep.h" },
		{ "ToolTip", "Enable mechanism to detect Engine loop overrunning the source" },
	};
#endif
	void Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit(void* Obj)
	{
		((UBlackmagicCustomTimeStep*)Obj)->bEnableOverrunDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection = { "bEnableOverrunDetection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicCustomTimeStep), &Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::NewProp_bEnableOverrunDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::ClassParams = {
		&UBlackmagicCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicCustomTimeStep.OuterSingleton, Z_Construct_UClass_UBlackmagicCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicCustomTimeStep.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UClass* StaticClass<UBlackmagicCustomTimeStep>()
	{
		return UBlackmagicCustomTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicCustomTimeStep);
	UBlackmagicCustomTimeStep::~UBlackmagicCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicCustomTimeStep, UBlackmagicCustomTimeStep::StaticClass, TEXT("UBlackmagicCustomTimeStep"), &Z_Registration_Info_UClass_UBlackmagicCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicCustomTimeStep), 1076867014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_2157815817(TEXT("/Script/BlackmagicMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
