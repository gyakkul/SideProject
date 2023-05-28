// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SphereReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ASphereReflectionCapture::StaticRegisterNativesASphereReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASphereReflectionCapture);
	UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister()
	{
		return ASphereReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_ASphereReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawCaptureRadius_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawCaptureRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASphereReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Actor used to capture the scene for reflection in a sphere shape.\n *\x09@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_4\n */" },
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SphereReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
		{ "ToolTip", "Actor used to capture the scene for reflection in a sphere shape.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_4" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData[] = {
		{ "Comment", "/** Sphere component used to visualize the capture radius */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
		{ "ToolTip", "Sphere component used to visualize the capture radius" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius = { "DrawCaptureRadius", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASphereReflectionCapture, DrawCaptureRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASphereReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASphereReflectionCapture_Statics::ClassParams = {
		&ASphereReflectionCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASphereReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_ASphereReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASphereReflectionCapture.OuterSingleton, Z_Construct_UClass_ASphereReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASphereReflectionCapture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASphereReflectionCapture>()
	{
		return ASphereReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereReflectionCapture);
	ASphereReflectionCapture::~ASphereReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASphereReflectionCapture, ASphereReflectionCapture::StaticClass, TEXT("ASphereReflectionCapture"), &Z_Registration_Info_UClass_ASphereReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASphereReflectionCapture), 2296699143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_840434484(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SphereReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
