// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/K2Node_DataprepActionCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DataprepActionCore() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UK2Node_DataprepActionCore();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UK2Node_DataprepActionCore_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UK2Node_DataprepActionCore::StaticRegisterNativesUK2Node_DataprepActionCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DataprepActionCore);
	UClass* Z_Construct_UClass_UK2Node_DataprepActionCore_NoRegister()
	{
		return UK2Node_DataprepActionCore::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DataprepActionCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepActionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataprepActionAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/K2Node_DataprepActionCore.h" },
		{ "ModuleRelativePath", "Public/Blueprint/K2Node_DataprepActionCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::NewProp_DataprepActionAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/K2Node_DataprepActionCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::NewProp_DataprepActionAsset = { "DataprepActionAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_DataprepActionCore, DataprepActionAsset), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::NewProp_DataprepActionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::NewProp_DataprepActionAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::NewProp_DataprepActionAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DataprepActionCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::ClassParams = {
		&UK2Node_DataprepActionCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DataprepActionCore()
	{
		if (!Z_Registration_Info_UClass_UK2Node_DataprepActionCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DataprepActionCore.OuterSingleton, Z_Construct_UClass_UK2Node_DataprepActionCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_DataprepActionCore.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UK2Node_DataprepActionCore>()
	{
		return UK2Node_DataprepActionCore::StaticClass();
	}
	UK2Node_DataprepActionCore::UK2Node_DataprepActionCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DataprepActionCore);
	UK2Node_DataprepActionCore::~UK2Node_DataprepActionCore() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Blueprint_K2Node_DataprepActionCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Blueprint_K2Node_DataprepActionCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DataprepActionCore, UK2Node_DataprepActionCore::StaticClass, TEXT("UK2Node_DataprepActionCore"), &Z_Registration_Info_UClass_UK2Node_DataprepActionCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DataprepActionCore), 3467910442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Blueprint_K2Node_DataprepActionCore_h_1908981431(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Blueprint_K2Node_DataprepActionCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Blueprint_K2Node_DataprepActionCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
