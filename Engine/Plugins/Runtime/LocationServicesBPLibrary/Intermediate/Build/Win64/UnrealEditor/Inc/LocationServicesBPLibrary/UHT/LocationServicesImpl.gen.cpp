// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesImpl() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();
	LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary();
// End Cross Module References
	void ULocationServicesImpl::StaticRegisterNativesULocationServicesImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationServicesImpl);
	UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister()
	{
		return ULocationServicesImpl::StaticClass();
	}
	struct Z_Construct_UClass_ULocationServicesImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLocationChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocationChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationServicesImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesImpl.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged = { "OnLocationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocationServicesImpl, OnLocationChanged), Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData)) }; // 253537156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationServicesImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServicesImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams = {
		&ULocationServicesImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationServicesImpl()
	{
		if (!Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton, Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocationServicesImpl.OuterSingleton;
	}
	template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<ULocationServicesImpl>()
	{
		return ULocationServicesImpl::StaticClass();
	}
	ULocationServicesImpl::ULocationServicesImpl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServicesImpl);
	ULocationServicesImpl::~ULocationServicesImpl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocationServicesImpl, ULocationServicesImpl::StaticClass, TEXT("ULocationServicesImpl"), &Z_Registration_Info_UClass_ULocationServicesImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationServicesImpl), 3061461304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_4217278016(TEXT("/Script/LocationServicesBPLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
