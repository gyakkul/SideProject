// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VectorField/VectorFieldVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AVectorFieldVolume::StaticRegisterNativesAVectorFieldVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVectorFieldVolume);
	UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister()
	{
		return AVectorFieldVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVectorFieldVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VectorFieldComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVectorFieldVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Advanced Collision" },
		{ "IncludePath", "VectorField/VectorFieldVolume.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VectorFieldVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent = { "VectorFieldComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVectorFieldVolume, VectorFieldComponent), Z_Construct_UClass_UVectorFieldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVectorFieldVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVectorFieldVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVectorFieldVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams = {
		&AVectorFieldVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVectorFieldVolume()
	{
		if (!Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton, Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVectorFieldVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AVectorFieldVolume>()
	{
		return AVectorFieldVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVectorFieldVolume);
	AVectorFieldVolume::~AVectorFieldVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVectorFieldVolume, AVectorFieldVolume::StaticClass, TEXT("AVectorFieldVolume"), &Z_Registration_Info_UClass_AVectorFieldVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVectorFieldVolume), 978770537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_558799743(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
