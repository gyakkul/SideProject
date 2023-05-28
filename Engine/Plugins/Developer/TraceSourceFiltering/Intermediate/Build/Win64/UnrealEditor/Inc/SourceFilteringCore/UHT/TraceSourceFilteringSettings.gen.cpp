// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraceSourceFilteringSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceSourceFilteringSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UTraceSourceFilteringSettings();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UTraceSourceFilteringSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringCore();
// End Cross Module References
	void UTraceSourceFilteringSettings::StaticRegisterNativesUTraceSourceFilteringSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceSourceFilteringSettings);
	UClass* Z_Construct_UClass_UTraceSourceFilteringSettings_NoRegister()
	{
		return UTraceSourceFilteringSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTraceSourceFilteringSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFilteringStates_MetaData[];
#endif
		static void NewProp_bDrawFilteringStates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFilteringStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyPassingActors_MetaData[];
#endif
		static void NewProp_bDrawOnlyPassingActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyPassingActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFilterDescriptionForRejectedActors_MetaData[];
#endif
		static void NewProp_bDrawFilterDescriptionForRejectedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFilterDescriptionForRejectedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputOptimizedFilterState_MetaData[];
#endif
		static void NewProp_bOutputOptimizedFilterState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputOptimizedFilterState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TraceSourceFilteringSettings.h" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates_MetaData[] = {
		{ "Comment", "/** Whether or not the filtering state for all considered AActor's inside for a UWorld should be drawn using a wire frame box */" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringSettings.h" },
		{ "ToolTip", "Whether or not the filtering state for all considered AActor's inside for a UWorld should be drawn using a wire frame box" },
	};
#endif
	void Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates_SetBit(void* Obj)
	{
		((UTraceSourceFilteringSettings*)Obj)->bDrawFilteringStates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates = { "bDrawFilteringStates", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTraceSourceFilteringSettings), &Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors_MetaData[] = {
		{ "Comment", "/** Whether or not only AActor's that are not filtered out should be considered for drawing their wireframe box */" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringSettings.h" },
		{ "ToolTip", "Whether or not only AActor's that are not filtered out should be considered for drawing their wireframe box" },
	};
#endif
	void Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors_SetBit(void* Obj)
	{
		((UTraceSourceFilteringSettings*)Obj)->bDrawOnlyPassingActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors = { "bDrawOnlyPassingActors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTraceSourceFilteringSettings), &Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors_MetaData[] = {
		{ "Comment", "/** Whether or not to draw the failed UDataSourceFilter's description for AActor's that did not pass the filtering */" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringSettings.h" },
		{ "ToolTip", "Whether or not to draw the failed UDataSourceFilter's description for AActor's that did not pass the filtering" },
	};
#endif
	void Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors_SetBit(void* Obj)
	{
		((UTraceSourceFilteringSettings*)Obj)->bDrawFilterDescriptionForRejectedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors = { "bDrawFilterDescriptionForRejectedActors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTraceSourceFilteringSettings), &Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState_MetaData[] = {
		{ "Comment", "/** Whether or not to, whenever it changes, output the optimized filter setup state to the log */" },
		{ "ModuleRelativePath", "Public/TraceSourceFilteringSettings.h" },
		{ "ToolTip", "Whether or not to, whenever it changes, output the optimized filter setup state to the log" },
	};
#endif
	void Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState_SetBit(void* Obj)
	{
		((UTraceSourceFilteringSettings*)Obj)->bOutputOptimizedFilterState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState = { "bOutputOptimizedFilterState", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTraceSourceFilteringSettings), &Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilteringStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawOnlyPassingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bDrawFilterDescriptionForRejectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::NewProp_bOutputOptimizedFilterState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceSourceFilteringSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::ClassParams = {
		&UTraceSourceFilteringSettings::StaticClass,
		"TraceSourceFilters",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceSourceFilteringSettings()
	{
		if (!Z_Registration_Info_UClass_UTraceSourceFilteringSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceSourceFilteringSettings.OuterSingleton, Z_Construct_UClass_UTraceSourceFilteringSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceSourceFilteringSettings.OuterSingleton;
	}
	template<> SOURCEFILTERINGCORE_API UClass* StaticClass<UTraceSourceFilteringSettings>()
	{
		return UTraceSourceFilteringSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceSourceFilteringSettings);
	UTraceSourceFilteringSettings::~UTraceSourceFilteringSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceSourceFilteringSettings, UTraceSourceFilteringSettings::StaticClass, TEXT("UTraceSourceFilteringSettings"), &Z_Registration_Info_UClass_UTraceSourceFilteringSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceSourceFilteringSettings), 924405731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_39677115(TEXT("/Script/SourceFilteringCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
