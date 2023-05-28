// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SystemTimeTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemTimeTimecodeProvider() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USystemTimeTimecodeProvider::StaticRegisterNativesUSystemTimeTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemTimeTimecodeProvider);
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFullFrame_MetaData[];
#endif
		static void NewProp_bGenerateFullFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFullFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPerformanceClock_MetaData[];
#endif
		static void NewProp_bUseHighPerformanceClock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPerformanceClock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the current system time to timecode, relative to a provided frame rate.\n */" },
		{ "IncludePath", "Engine/SystemTimeTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Converts the current system time to timecode, relative to a provided frame rate." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The frame rate at which the timecode value will be generated. */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "The frame rate at which the timecode value will be generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USystemTimeTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** When generating frame time, should we generate full frame without subframe value.*/" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "When generating frame time, should we generate full frame without subframe value." },
	};
#endif
	void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit(void* Obj)
	{
		((USystemTimeTimecodeProvider*)Obj)->bGenerateFullFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame = { "bGenerateFullFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Use the high performance clock instead of the system time to generate the timecode value.\n\x09 * Using the high performance clock is faster but will make the value drift over time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Use the high performance clock instead of the system time to generate the timecode value.\nUsing the high performance clock is faster but will make the value drift over time." },
	};
#endif
	void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit(void* Obj)
	{
		((USystemTimeTimecodeProvider*)Obj)->bUseHighPerformanceClock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock = { "bUseHighPerformanceClock", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemTimeTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams = {
		&USystemTimeTimecodeProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton, Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USystemTimeTimecodeProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USystemTimeTimecodeProvider>()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USystemTimeTimecodeProvider);
	USystemTimeTimecodeProvider::~USystemTimeTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USystemTimeTimecodeProvider, USystemTimeTimecodeProvider::StaticClass, TEXT("USystemTimeTimecodeProvider"), &Z_Registration_Info_UClass_USystemTimeTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemTimeTimecodeProvider), 2215875343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_3160394757(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SystemTimeTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
