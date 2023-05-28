// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeMeshProxyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeMeshProxyComponent::StaticRegisterNativesULandscapeMeshProxyComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMeshProxyComponent);
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister()
	{
		return ULandscapeMeshProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyComponentBases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponentBases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProxyComponentBases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyLOD_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_ProxyLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "LandscapeMeshProxyComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData[] = {
		{ "Comment", "/* The landscape this proxy was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The landscape this proxy was generated for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData[] = {
		{ "Comment", "/* The components this proxy was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The components this proxy was generated for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentBases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData[] = {
		{ "Comment", "/* LOD level proxy was generated for */" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "LOD level proxy was generated for" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD = { "ProxyLOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyLOD), METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshProxyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams = {
		&ULandscapeMeshProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers),
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent()
	{
		if (!Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton, Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeMeshProxyComponent.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMeshProxyComponent>()
	{
		return ULandscapeMeshProxyComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshProxyComponent);
	ULandscapeMeshProxyComponent::~ULandscapeMeshProxyComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMeshProxyComponent, ULandscapeMeshProxyComponent::StaticClass, TEXT("ULandscapeMeshProxyComponent"), &Z_Registration_Info_UClass_ULandscapeMeshProxyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMeshProxyComponent), 257760854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_1689401417(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshProxyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
