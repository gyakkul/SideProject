// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Deformer/DeformerDataInterfaceGroom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroom() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomDataInterface();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomDataInterface_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UOptimusGroomDataInterface::StaticRegisterNativesUOptimusGroomDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomDataInterface);
	UClass* Z_Construct_UClass_UOptimusGroomDataInterface_NoRegister()
	{
		return UOptimusGroomDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading groom. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroom.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroom.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading groom." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomDataInterface_Statics::ClassParams = {
		&UOptimusGroomDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomDataInterface.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomDataInterface>()
	{
		return UOptimusGroomDataInterface::StaticClass();
	}
	UOptimusGroomDataInterface::UOptimusGroomDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomDataInterface);
	UOptimusGroomDataInterface::~UOptimusGroomDataInterface() {}
	void UOptimusGroomDataProvider::StaticRegisterNativesUOptimusGroomDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomDataProvider);
	UClass* Z_Construct_UClass_UOptimusGroomDataProvider_NoRegister()
	{
		return UOptimusGroomDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Groom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading groom. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroom.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroom.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading groom." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom = { "Groom", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGroomDataProvider, Groom), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomDataProvider_Statics::NewProp_Groom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomDataProvider_Statics::ClassParams = {
		&UOptimusGroomDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomDataProvider.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomDataProvider>()
	{
		return UOptimusGroomDataProvider::StaticClass();
	}
	UOptimusGroomDataProvider::UOptimusGroomDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomDataProvider);
	UOptimusGroomDataProvider::~UOptimusGroomDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomDataInterface, UOptimusGroomDataInterface::StaticClass, TEXT("UOptimusGroomDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomDataInterface), 1840881455U) },
		{ Z_Construct_UClass_UOptimusGroomDataProvider, UOptimusGroomDataProvider::StaticClass, TEXT("UOptimusGroomDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomDataProvider), 2631972086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroom_h_2742615782(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
