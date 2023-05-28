// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNECoreModelData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreModelData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NNECORE_API UClass* Z_Construct_UClass_UNNEModelData();
	NNECORE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	void UNNEModelData::StaticRegisterNativesUNNEModelData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEModelData);
	UClass* Z_Construct_UClass_UNNEModelData_NoRegister()
	{
		return UNNEModelData::StaticClass();
	}
	struct Z_Construct_UClass_UNNEModelData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNEModelData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NNE" },
		{ "Comment", "/**\n * This class represents assets that store neural network model data.\n *\n * Neural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\n * UNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\n * An INNERuntime object retrieved by UE::NNECore::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model.\n */" },
		{ "IncludePath", "NNECoreModelData.h" },
		{ "ModuleRelativePath", "Public/NNECoreModelData.h" },
		{ "ToolTip", "This class represents assets that store neural network model data.\n\nNeural network models typically consist of a graph of operations and corresponding parameters as e.g. weights.\nUNNEModelData assets store such model data as imported e.g. by the UNNEModelDataFactory class.\nAn INNERuntime object retrieved by UE::NNECore::GetRuntime<T>(const FString& Name) can be used to create an inferable neural network model." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNEModelData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEModelData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEModelData_Statics::ClassParams = {
		&UNNEModelData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNEModelData()
	{
		if (!Z_Registration_Info_UClass_UNNEModelData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEModelData.OuterSingleton, Z_Construct_UClass_UNNEModelData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNEModelData.OuterSingleton;
	}
	template<> NNECORE_API UClass* StaticClass<UNNEModelData>()
	{
		return UNNEModelData::StaticClass();
	}
	UNNEModelData::UNNEModelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEModelData);
	UNNEModelData::~UNNEModelData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNNEModelData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreModelData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreModelData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNEModelData, UNNEModelData::StaticClass, TEXT("UNNEModelData"), &Z_Registration_Info_UClass_UNNEModelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEModelData), 4188480327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreModelData_h_1173641606(TEXT("/Script/NNECore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreModelData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreModelData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
