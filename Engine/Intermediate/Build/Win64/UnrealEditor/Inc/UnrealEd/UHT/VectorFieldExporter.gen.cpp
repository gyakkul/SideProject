// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/VectorFieldExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldExporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UVectorFieldExporter();
	UNREALED_API UClass* Z_Construct_UClass_UVectorFieldExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UVectorFieldExporter::StaticRegisterNativesUVectorFieldExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldExporter);
	UClass* Z_Construct_UClass_UVectorFieldExporter_NoRegister()
	{
		return UVectorFieldExporter::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/VectorFieldExporter.h" },
		{ "ModuleRelativePath", "Classes/Exporters/VectorFieldExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldExporter_Statics::ClassParams = {
		&UVectorFieldExporter::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldExporter()
	{
		if (!Z_Registration_Info_UClass_UVectorFieldExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldExporter.OuterSingleton, Z_Construct_UClass_UVectorFieldExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorFieldExporter.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVectorFieldExporter>()
	{
		return UVectorFieldExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldExporter);
	UVectorFieldExporter::~UVectorFieldExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldExporter, UVectorFieldExporter::StaticClass, TEXT("UVectorFieldExporter"), &Z_Registration_Info_UClass_UVectorFieldExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldExporter), 2847293829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_618993944(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
