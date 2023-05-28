// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeDataInterface() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	void UComputeDataInterface::StaticRegisterNativesUComputeDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeDataInterface);
	UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister()
	{
		return UComputeDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComputeDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Compute Data Interface required to compile a Compute Graph. \n * Compute Kernels require Data Interfaces to fulfill their external functions.\n * Compute Data Interfaces define how Compute Data Providers will actually marshal data in and out of Kernels.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeDataInterface.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeDataInterface.h" },
		{ "ToolTip", "Compute Data Interface required to compile a Compute Graph.\nCompute Kernels require Data Interfaces to fulfill their external functions.\nCompute Data Interfaces define how Compute Data Providers will actually marshal data in and out of Kernels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeDataInterface_Statics::ClassParams = {
		&UComputeDataInterface::StaticClass,
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
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeDataInterface()
	{
		if (!Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton, Z_Construct_UClass_UComputeDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeDataInterface.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeDataInterface>()
	{
		return UComputeDataInterface::StaticClass();
	}
	UComputeDataInterface::UComputeDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeDataInterface);
	UComputeDataInterface::~UComputeDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeDataInterface, UComputeDataInterface::StaticClass, TEXT("UComputeDataInterface"), &Z_Registration_Info_UClass_UComputeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeDataInterface), 1699099281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_3032354075(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
