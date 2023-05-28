// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IDataSourceFilterSetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDataSourceFilterSetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterSetInterface();
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringCore();
// End Cross Module References
	void UDataSourceFilterSetInterface::StaticRegisterNativesUDataSourceFilterSetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataSourceFilterSetInterface);
	UClass* Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister()
	{
		return UDataSourceFilterSetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDataSourceFilterSetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IDataSourceFilterSetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDataSourceFilterSetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::ClassParams = {
		&UDataSourceFilterSetInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataSourceFilterSetInterface()
	{
		if (!Z_Registration_Info_UClass_UDataSourceFilterSetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataSourceFilterSetInterface.OuterSingleton, Z_Construct_UClass_UDataSourceFilterSetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataSourceFilterSetInterface.OuterSingleton;
	}
	template<> SOURCEFILTERINGCORE_API UClass* StaticClass<UDataSourceFilterSetInterface>()
	{
		return UDataSourceFilterSetInterface::StaticClass();
	}
	UDataSourceFilterSetInterface::UDataSourceFilterSetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataSourceFilterSetInterface);
	UDataSourceFilterSetInterface::~UDataSourceFilterSetInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataSourceFilterSetInterface, UDataSourceFilterSetInterface::StaticClass, TEXT("UDataSourceFilterSetInterface"), &Z_Registration_Info_UClass_UDataSourceFilterSetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataSourceFilterSetInterface), 311471338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_3770592085(TEXT("/Script/SourceFilteringCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterSetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
