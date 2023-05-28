// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Experimental/NNE/Source/NNERuntimeRDG/Private/NNERuntimeRDGDml.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNERuntimeRDGDml() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister();
	NNERUNTIMERDG_API UClass* Z_Construct_UClass_UNNERuntimeRDGDmlImpl();
	NNERUNTIMERDG_API UClass* Z_Construct_UClass_UNNERuntimeRDGDmlImpl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNERuntimeRDG();
// End Cross Module References
	void UNNERuntimeRDGDmlImpl::StaticRegisterNativesUNNERuntimeRDGDmlImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeRDGDmlImpl);
	UClass* Z_Construct_UClass_UNNERuntimeRDGDmlImpl_NoRegister()
	{
		return UNNERuntimeRDGDmlImpl::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NNERuntimeRDG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NNERuntimeRDGDml.h" },
		{ "ModuleRelativePath", "Private/NNERuntimeRDGDml.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNNERuntime_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeRDGDmlImpl, INNERuntime), false },  // 3543825881
			{ Z_Construct_UClass_UNNERuntimeRDG_NoRegister, (int32)VTABLE_OFFSET(UNNERuntimeRDGDmlImpl, INNERuntimeRDG), false },  // 2878698391
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNERuntimeRDGDmlImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::ClassParams = {
		&UNNERuntimeRDGDmlImpl::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntimeRDGDmlImpl()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeRDGDmlImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeRDGDmlImpl.OuterSingleton, Z_Construct_UClass_UNNERuntimeRDGDmlImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeRDGDmlImpl.OuterSingleton;
	}
	template<> NNERUNTIMERDG_API UClass* StaticClass<UNNERuntimeRDGDmlImpl>()
	{
		return UNNERuntimeRDGDmlImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeRDGDmlImpl);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeRDG_Private_NNERuntimeRDGDml_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeRDG_Private_NNERuntimeRDGDml_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeRDGDmlImpl, UNNERuntimeRDGDmlImpl::StaticClass, TEXT("UNNERuntimeRDGDmlImpl"), &Z_Registration_Info_UClass_UNNERuntimeRDGDmlImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeRDGDmlImpl), 582084726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeRDG_Private_NNERuntimeRDGDml_h_1030685770(TEXT("/Script/NNERuntimeRDG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeRDG_Private_NNERuntimeRDGDml_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNERuntimeRDG_Private_NNERuntimeRDGDml_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
