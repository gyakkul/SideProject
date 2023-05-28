// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositeCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCameraShakePattern() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCompositeCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	void UCompositeCameraShakePattern::StaticRegisterNativesUCompositeCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositeCameraShakePattern);
	UClass* Z_Construct_UClass_UCompositeCameraShakePattern_NoRegister()
	{
		return UCompositeCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPatterns_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildPatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildPatterns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "CameraShake" },
		{ "Comment", "/**\n * A base class for a simple camera shake.\n */" },
		{ "IncludePath", "CompositeCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base class for a simple camera shake." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The list of child shake patterns */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ToolTip", "The list of child shake patterns" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner = { "ChildPatterns", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The list of child shake patterns */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CompositeCameraShakePattern.h" },
		{ "ToolTip", "The list of child shake patterns" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns = { "ChildPatterns", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositeCameraShakePattern, ChildPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCameraShakePattern_Statics::NewProp_ChildPatterns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCameraShakePattern_Statics::ClassParams = {
		&UCompositeCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositeCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_UCompositeCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositeCameraShakePattern.OuterSingleton, Z_Construct_UClass_UCompositeCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositeCameraShakePattern.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCompositeCameraShakePattern>()
	{
		return UCompositeCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCameraShakePattern);
	UCompositeCameraShakePattern::~UCompositeCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CompositeCameraShakePattern_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CompositeCameraShakePattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositeCameraShakePattern, UCompositeCameraShakePattern::StaticClass, TEXT("UCompositeCameraShakePattern"), &Z_Registration_Info_UClass_UCompositeCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositeCameraShakePattern), 2120693415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CompositeCameraShakePattern_h_3347545075(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CompositeCameraShakePattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CompositeCameraShakePattern_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
