// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassObserverProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassObserverProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	void UMassObserverProcessor::StaticRegisterNativesUMassObserverProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassObserverProcessor);
	UClass* Z_Construct_UClass_UMassObserverProcessor_NoRegister()
	{
		return UMassObserverProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassObserverProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservedType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObservedType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassObserverProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObserverProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassObserverProcessor.h" },
		{ "ModuleRelativePath", "Public/MassObserverProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType_MetaData[] = {
		{ "Comment", "/** Determines which Fragment or Tag type this given UMassObserverProcessor will be observing */" },
		{ "ModuleRelativePath", "Public/MassObserverProcessor.h" },
		{ "ToolTip", "Determines which Fragment or Tag type this given UMassObserverProcessor will be observing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType = { "ObservedType", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassObserverProcessor, ObservedType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverProcessor_Statics::NewProp_ObservedType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassObserverProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassObserverProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassObserverProcessor_Statics::ClassParams = {
		&UMassObserverProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::PropPointers),
		0,
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UMassObserverProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassObserverProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton, Z_Construct_UClass_UMassObserverProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassObserverProcessor.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassObserverProcessor>()
	{
		return UMassObserverProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassObserverProcessor);
	UMassObserverProcessor::~UMassObserverProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassObserverProcessor, UMassObserverProcessor::StaticClass, TEXT("UMassObserverProcessor"), &Z_Registration_Info_UClass_UMassObserverProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassObserverProcessor), 1156237663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverProcessor_h_481492646(TEXT("/Script/MassEntity"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
