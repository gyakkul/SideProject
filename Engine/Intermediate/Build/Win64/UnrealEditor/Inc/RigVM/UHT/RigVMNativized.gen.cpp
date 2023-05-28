// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMNativized.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMNativized() {}
// Cross Module References
	RIGVM_API UClass* Z_Construct_UClass_URigVM();
	RIGVM_API UClass* Z_Construct_UClass_URigVMNativized();
	RIGVM_API UClass* Z_Construct_UClass_URigVMNativized_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	void URigVMNativized::StaticRegisterNativesURigVMNativized()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMNativized);
	UClass* Z_Construct_UClass_URigVMNativized_NoRegister()
	{
		return URigVMNativized::StaticClass();
	}
	struct Z_Construct_UClass_URigVMNativized_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMNativized_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVM,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMNativized_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RigVMCore/RigVMNativized.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMNativized.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMNativized_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMNativized>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMNativized_Statics::ClassParams = {
		&URigVMNativized::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMNativized_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMNativized_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMNativized()
	{
		if (!Z_Registration_Info_UClass_URigVMNativized.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMNativized.OuterSingleton, Z_Construct_UClass_URigVMNativized_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMNativized.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMNativized>()
	{
		return URigVMNativized::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMNativized);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMNativized)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMNativized_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMNativized_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMNativized, URigVMNativized::StaticClass, TEXT("URigVMNativized"), &Z_Registration_Info_UClass_URigVMNativized, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMNativized), 2031142560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMNativized_h_3765075472(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMNativized_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMNativized_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
