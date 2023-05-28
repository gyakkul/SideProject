// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VectorField/VectorField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorField() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVectorField::StaticRegisterNativesUVectorField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorField);
	UClass* Z_Construct_UClass_UVectorField_NoRegister()
	{
		return UVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VectorField/VectorField.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "VectorFieldBounds" },
		{ "Comment", "/** Bounds of the volume in local space. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
		{ "ToolTip", "Bounds of the volume in local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorField, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** The intensity with which to multiplie vectors in this field. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorField.h" },
		{ "ToolTip", "The intensity with which to multiplie vectors in this field." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorField, Intensity), METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorField_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorField_Statics::NewProp_Intensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorField_Statics::ClassParams = {
		&UVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorField()
	{
		if (!Z_Registration_Info_UClass_UVectorField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorField.OuterSingleton, Z_Construct_UClass_UVectorField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorField.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVectorField>()
	{
		return UVectorField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorField);
	UVectorField::~UVectorField() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVectorField, UVectorField::StaticClass, TEXT("UVectorField"), &Z_Registration_Info_UClass_UVectorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorField), 2360103635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_883742127(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
