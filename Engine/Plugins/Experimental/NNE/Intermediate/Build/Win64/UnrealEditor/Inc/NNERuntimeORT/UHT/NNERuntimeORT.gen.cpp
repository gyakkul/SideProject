// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNERuntimeORT/Private/NNERuntimeORT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeORT() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
	NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTDmlImpl();
	NNERUNTIMEORT_API UClass* Z_Construct_UClass_UNNERuntimeORTDmlImpl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNERuntimeORT();
// End Cross Module References
	void UNNERuntimeORTDmlImpl::StaticRegisterNativesUNNERuntimeORTDmlImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeORTDmlImpl);
	UClass* Z_Construct_UClass_UNNERuntimeORTDmlImpl_NoRegister()
	{
		return UNNERuntimeORTDmlImpl::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeORT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NNERuntimeORT.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeORT.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNNERuntime_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDmlImpl, INNERuntime), false },  // 3543825881
			{ Z_Construct_UClass_UNNERuntimeGPU_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeORTDmlImpl, INNERuntimeGPU), false },  // 1972029654
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeORTDmlImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::ClassParams = {
		&UNNERuntimeORTDmlImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntimeORTDmlImpl()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeORTDmlImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeORTDmlImpl.OuterSingleton, Z_Construct_UClass_UNNERuntimeORTDmlImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeORTDmlImpl.OuterSingleton;
	}
	template<> NNERUNTIMEORT_API UClass* StaticClass<UNNERuntimeORTDmlImpl>()
	{
		return UNNERuntimeORTDmlImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeORTDmlImpl);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeORTDmlImpl, UNNERuntimeORTDmlImpl::StaticClass, TEXT("UNNERuntimeORTDmlImpl"), &Z_Registration_Info_UClass_UNNERuntimeORTDmlImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeORTDmlImpl), 2221709451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeORT_Private_NNERuntimeORT_h_2196087479(TEXT("/Script/NNERuntimeORT"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeORT_Private_NNERuntimeORT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
