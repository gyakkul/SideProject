// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusSceneCaptureCubemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusSceneCaptureCubemap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
// End Cross Module References
	void UOculusSceneCaptureCubemap::StaticRegisterNativesUOculusSceneCaptureCubemap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusSceneCaptureCubemap);
	UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap_NoRegister()
	{
		return UOculusSceneCaptureCubemap::StaticClass();
	}
	struct Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusSceneCaptureCubemap.h" },
		{ "ModuleRelativePath", "Private/OculusSceneCaptureCubemap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner = { "CaptureComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusSceneCaptureCubemap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents = { "CaptureComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusSceneCaptureCubemap, CaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusSceneCaptureCubemap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::ClassParams = {
		&UOculusSceneCaptureCubemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap()
	{
		if (!Z_Registration_Info_UClass_UOculusSceneCaptureCubemap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusSceneCaptureCubemap.OuterSingleton, Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusSceneCaptureCubemap.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UOculusSceneCaptureCubemap>()
	{
		return UOculusSceneCaptureCubemap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusSceneCaptureCubemap);
	UOculusSceneCaptureCubemap::~UOculusSceneCaptureCubemap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusSceneCaptureCubemap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusSceneCaptureCubemap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusSceneCaptureCubemap, UOculusSceneCaptureCubemap::StaticClass, TEXT("UOculusSceneCaptureCubemap"), &Z_Registration_Info_UClass_UOculusSceneCaptureCubemap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusSceneCaptureCubemap), 600979081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusSceneCaptureCubemap_h_509331432(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusSceneCaptureCubemap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Private_OculusSceneCaptureCubemap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
