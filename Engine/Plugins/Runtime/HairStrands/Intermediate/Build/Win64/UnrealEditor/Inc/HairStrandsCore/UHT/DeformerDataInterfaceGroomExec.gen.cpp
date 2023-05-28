// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Deformer/DeformerDataInterfaceGroomExec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformerDataInterfaceGroomExec() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider_NoRegister();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusGroomExecDomain;
	static UEnum* EOptimusGroomExecDomain_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EOptimusGroomExecDomain"));
		}
		return Z_Registration_Info_UEnum_EOptimusGroomExecDomain.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EOptimusGroomExecDomain>()
	{
		return EOptimusGroomExecDomain_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enumerators[] = {
		{ "EOptimusGroomExecDomain::None", (int64)EOptimusGroomExecDomain::None },
		{ "EOptimusGroomExecDomain::ControlPoint", (int64)EOptimusGroomExecDomain::ControlPoint },
		{ "EOptimusGroomExecDomain::Curve", (int64)EOptimusGroomExecDomain::Curve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enum_MetaDataParams[] = {
		{ "ControlPoint.Comment", "/** Run kernel with one thread per control point. */" },
		{ "ControlPoint.Name", "EOptimusGroomExecDomain::ControlPoint" },
		{ "ControlPoint.ToolTip", "Run kernel with one thread per control point." },
		{ "Curve.Comment", "/** Run kernel with one thread per curve. */" },
		{ "Curve.Name", "EOptimusGroomExecDomain::Curve" },
		{ "Curve.ToolTip", "Run kernel with one thread per curve." },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EOptimusGroomExecDomain::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EOptimusGroomExecDomain",
		"EOptimusGroomExecDomain",
		Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain()
	{
		if (!Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusGroomExecDomain.InnerSingleton;
	}
	void UOptimusGroomExecDataInterface::StaticRegisterNativesUOptimusGroomExecDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomExecDataInterface);
	UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface_NoRegister()
	{
		return UOptimusGroomExecDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomExec.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
		{ "ToolTip", "Compute Framework Data Interface for executing kernels over a skinned mesh domain." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGroomExecDataInterface, Domain), Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_MetaData)) }; // 3170113405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::NewProp_Domain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomExecDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::ClassParams = {
		&UOptimusGroomExecDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomExecDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusGroomExecDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomExecDataInterface.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomExecDataInterface>()
	{
		return UOptimusGroomExecDataInterface::StaticClass();
	}
	UOptimusGroomExecDataInterface::UOptimusGroomExecDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomExecDataInterface);
	UOptimusGroomExecDataInterface::~UOptimusGroomExecDataInterface() {}
	void UOptimusGroomExecDataProvider::StaticRegisterNativesUOptimusGroomExecDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusGroomExecDataProvider);
	UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider_NoRegister()
	{
		return UOptimusGroomExecDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Domain_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Domain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for executing kernels over a skinned mesh domain. */" },
		{ "IncludePath", "Deformer/DeformerDataInterfaceGroomExec.h" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
		{ "ToolTip", "Compute Framework Data Provider for executing kernels over a skinned mesh domain." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGroomExecDataProvider, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Deformer/DeformerDataInterfaceGroomExec.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusGroomExecDataProvider, Domain), Z_Construct_UEnum_HairStrandsCore_EOptimusGroomExecDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_MetaData)) }; // 3170113405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_GroomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::NewProp_Domain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusGroomExecDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::ClassParams = {
		&UOptimusGroomExecDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusGroomExecDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusGroomExecDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusGroomExecDataProvider.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UOptimusGroomExecDataProvider>()
	{
		return UOptimusGroomExecDataProvider::StaticClass();
	}
	UOptimusGroomExecDataProvider::UOptimusGroomExecDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusGroomExecDataProvider);
	UOptimusGroomExecDataProvider::~UOptimusGroomExecDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::EnumInfo[] = {
		{ EOptimusGroomExecDomain_StaticEnum, TEXT("EOptimusGroomExecDomain"), &Z_Registration_Info_UEnum_EOptimusGroomExecDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3170113405U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusGroomExecDataInterface, UOptimusGroomExecDataInterface::StaticClass, TEXT("UOptimusGroomExecDataInterface"), &Z_Registration_Info_UClass_UOptimusGroomExecDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomExecDataInterface), 439388014U) },
		{ Z_Construct_UClass_UOptimusGroomExecDataProvider, UOptimusGroomExecDataProvider::StaticClass, TEXT("UOptimusGroomExecDataProvider"), &Z_Registration_Info_UClass_UOptimusGroomExecDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusGroomExecDataProvider), 1016589191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_2605823621(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_Deformer_DeformerDataInterfaceGroomExec_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
