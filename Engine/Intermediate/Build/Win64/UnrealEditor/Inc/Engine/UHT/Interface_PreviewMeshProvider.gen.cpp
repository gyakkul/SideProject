// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_PreviewMeshProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterface_PreviewMeshProvider::StaticRegisterNativesUInterface_PreviewMeshProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterface_PreviewMeshProvider);
	UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister()
	{
		return UInterface_PreviewMeshProvider::StaticClass();
	}
	struct Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_PreviewMeshProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterface_PreviewMeshProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams = {
		&UInterface_PreviewMeshProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider()
	{
		if (!Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton, Z_Construct_UClass_UInterface_PreviewMeshProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterface_PreviewMeshProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterface_PreviewMeshProvider>()
	{
		return UInterface_PreviewMeshProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterface_PreviewMeshProvider);
	UInterface_PreviewMeshProvider::~UInterface_PreviewMeshProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterface_PreviewMeshProvider, UInterface_PreviewMeshProvider::StaticClass, TEXT("UInterface_PreviewMeshProvider"), &Z_Registration_Info_UClass_UInterface_PreviewMeshProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterface_PreviewMeshProvider), 3026411520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_290834943(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PreviewMeshProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
