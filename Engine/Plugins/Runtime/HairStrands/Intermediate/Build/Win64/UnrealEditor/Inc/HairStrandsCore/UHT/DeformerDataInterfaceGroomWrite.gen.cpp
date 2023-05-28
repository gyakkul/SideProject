// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Deformer/DeformerDataInterfaceGroomWrite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomWrite() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UOptimusGroomWriteDataInterface::StaticRegisterNativesUOptimusGroomWriteDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomWriteDataInterface);
	UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface_NoRegister()
	{
		return UOptimusGroomWriteDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomWrite.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomWrite.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomWriteDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::ClassParams = {
		&UOptimusGroomWriteDataInterface::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomWriteDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomWriteDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomWriteDataInterface>()
	{
		return UOptimusGroomWriteDataInterface::StaticClass();
	}
	UOptimusGroomWriteDataInterface::UOptimusGroomWriteDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomWriteDataInterface);
	UOptimusGroomWriteDataInterface::~UOptimusGroomWriteDataInterface() {}
	void UOptimusGroomWriteDataProvider::StaticRegisterNativesUOptimusGroomWriteDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomWriteDataProvider);
	UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider_NoRegister()
	{
		return UOptimusGroomWriteDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomWrite.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomWrite.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomWrite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGroomWriteDataProvider, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::NewProp_GroomComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomWriteDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::ClassParams = {
		&UOptimusGroomWriteDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomWriteDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomWriteDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomWriteDataProvider>()
	{
		return UOptimusGroomWriteDataProvider::StaticClass();
	}
	UOptimusGroomWriteDataProvider::UOptimusGroomWriteDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomWriteDataProvider);
	UOptimusGroomWriteDataProvider::~UOptimusGroomWriteDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomWrite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomWrite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomWriteDataInterface, UOptimusGroomWriteDataInterface::StaticClass, TEXT("UOptimusGroomWriteDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomWriteDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomWriteDataInterface), 94271676U) },
		{ Z_Construct_UClass_UOptimusGroomWriteDataProvider, UOptimusGroomWriteDataProvider::StaticClass, TEXT("UOptimusGroomWriteDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomWriteDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomWriteDataProvider), 4157191136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomWrite_h_500769027(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomWrite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomWrite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
