// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/TargetingSystem/TargetingPreset.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingPreset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingTaskSet();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingPreset::StaticRegisterNativesUTargetingPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingPreset);
	UClass* Z_Construct_UClass_UTargetingPreset_NoRegister()
	{
		return UTargetingPreset::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingTaskSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingTaskSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@class UTargetingPreset\n*\n*\x09This object is used when a data asset is preferred for task setup.\n*\n*\x09Tasks will be processed in the order they are setup in the task set. It\n*\x09is recommended that selection tasks happen first before any filtering\n*\x09""and sorting.\n*/" },
		{ "IncludePath", "TargetingSystem/TargetingPreset.h" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingPreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingPreset\n\nThis object is used when a data asset is preferred for task setup.\n\nTasks will be processed in the order they are setup in the task set. It\nis recommended that selection tasks happen first before any filtering\nand sorting." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingPreset_Statics::NewProp_TargetingTaskSet_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** The tasks that make up this targeting preset */" },
		{ "ModuleRelativePath", "TargetingSystem/TargetingPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The tasks that make up this targeting preset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingPreset_Statics::NewProp_TargetingTaskSet = { "TargetingTaskSet", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingPreset, TargetingTaskSet), Z_Construct_UScriptStruct_FTargetingTaskSet, METADATA_PARAMS(Z_Construct_UClass_UTargetingPreset_Statics::NewProp_TargetingTaskSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingPreset_Statics::NewProp_TargetingTaskSet_MetaData)) }; // 98691058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingPreset_Statics::NewProp_TargetingTaskSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingPreset_Statics::ClassParams = {
		&UTargetingPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetingPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingPreset_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingPreset()
	{
		if (!Z_Registration_Info_UClass_UTargetingPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingPreset.OuterSingleton, Z_Construct_UClass_UTargetingPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingPreset.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingPreset>()
	{
		return UTargetingPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingPreset);
	UTargetingPreset::~UTargetingPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingPreset, UTargetingPreset::StaticClass, TEXT("UTargetingPreset"), &Z_Registration_Info_UClass_UTargetingPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingPreset), 1483079667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingPreset_h_1869482848(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_TargetingSystem_TargetingPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
