// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureRenderTarget::StaticRegisterNativesUTextureRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget);
	UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister()
	{
		return UTextureRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TextureRenderTarget.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma_MetaData[] = {
		{ "Category", "TextureRenderTarget" },
		{ "Comment", "/** Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget.h" },
		{ "ToolTip", "Will override FTextureRenderTarget2DResource::GetDisplayGamma if > 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma = { "TargetGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget, TargetGamma), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget_Statics::NewProp_TargetGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget_Statics::ClassParams = {
		&UTextureRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::PropPointers),
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTarget()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget>()
	{
		return UTextureRenderTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget);
	UTextureRenderTarget::~UTextureRenderTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget, UTextureRenderTarget::StaticClass, TEXT("UTextureRenderTarget"), &Z_Registration_Info_UClass_UTextureRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget), 2704924415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_2728383868(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
