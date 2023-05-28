// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BoxReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABoxReflectionCapture::StaticRegisterNativesABoxReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxReflectionCapture);
	UClass* Z_Construct_UClass_ABoxReflectionCapture_NoRegister()
	{
		return ABoxReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_ABoxReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Actor used to capture the scene for reflection in a box shape \n * @see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html\n */" },
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/BoxReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/BoxReflectionCapture.h" },
		{ "ToolTip", "Actor used to capture the scene for reflection in a box shape\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_3/index.html" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams = {
		&ABoxReflectionCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton, Z_Construct_UClass_ABoxReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoxReflectionCapture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ABoxReflectionCapture>()
	{
		return ABoxReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxReflectionCapture);
	ABoxReflectionCapture::~ABoxReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoxReflectionCapture, ABoxReflectionCapture::StaticClass, TEXT("ABoxReflectionCapture"), &Z_Registration_Info_UClass_ABoxReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxReflectionCapture), 1853934886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_1583600031(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BoxReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
