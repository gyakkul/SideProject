// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifier/VCamModifierContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamModifierContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierContext();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierContext_NoRegister();
// End Cross Module References
	void UVCamModifierContext::StaticRegisterNativesUVCamModifierContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamModifierContext);
	UClass* Z_Construct_UClass_UVCamModifierContext_NoRegister()
	{
		return UVCamModifierContext::StaticClass();
	}
	struct Z_Construct_UClass_UVCamModifierContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamModifierContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamModifierContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modifier/VCamModifierContext.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifier/VCamModifierContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamModifierContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamModifierContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamModifierContext_Statics::ClassParams = {
		&UVCamModifierContext::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamModifierContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamModifierContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamModifierContext()
	{
		if (!Z_Registration_Info_UClass_UVCamModifierContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamModifierContext.OuterSingleton, Z_Construct_UClass_UVCamModifierContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamModifierContext.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamModifierContext>()
	{
		return UVCamModifierContext::StaticClass();
	}
	UVCamModifierContext::UVCamModifierContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamModifierContext);
	UVCamModifierContext::~UVCamModifierContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamModifierContext, UVCamModifierContext::StaticClass, TEXT("UVCamModifierContext"), &Z_Registration_Info_UClass_UVCamModifierContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamModifierContext), 3959943418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierContext_h_2656571378(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Modifier_VCamModifierContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
