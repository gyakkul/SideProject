// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeMeshProxyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ALandscapeMeshProxyActor::StaticRegisterNativesALandscapeMeshProxyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeMeshProxyActor);
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor_NoRegister()
	{
		return ALandscapeMeshProxyActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeMeshProxyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMeshProxyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeMeshProxyComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeMeshProxyActor.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LandscapeMeshProxyActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent = { "LandscapeMeshProxyComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent), Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::NewProp_LandscapeMeshProxyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeMeshProxyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::ClassParams = {
		&ALandscapeMeshProxyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeMeshProxyActor()
	{
		if (!Z_Registration_Info_UClass_ALandscapeMeshProxyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeMeshProxyActor.OuterSingleton, Z_Construct_UClass_ALandscapeMeshProxyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeMeshProxyActor.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeMeshProxyActor>()
	{
		return ALandscapeMeshProxyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeMeshProxyActor);
	ALandscapeMeshProxyActor::~ALandscapeMeshProxyActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeMeshProxyActor, ALandscapeMeshProxyActor::StaticClass, TEXT("ALandscapeMeshProxyActor"), &Z_Registration_Info_UClass_ALandscapeMeshProxyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeMeshProxyActor), 504762437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_1297137172(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
