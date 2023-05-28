// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/AnimSequenceExporterFBX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceExporterFBX() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceExporterFBX();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UExporterFBX();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimSequenceExporterFBX::StaticRegisterNativesUAnimSequenceExporterFBX()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceExporterFBX);
	UClass* Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister()
	{
		return UAnimSequenceExporterFBX::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceExporterFBX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporterFBX,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/AnimSequenceExporterFBX.h" },
		{ "ModuleRelativePath", "Classes/Exporters/AnimSequenceExporterFBX.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceExporterFBX>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::ClassParams = {
		&UAnimSequenceExporterFBX::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceExporterFBX()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceExporterFBX.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceExporterFBX.OuterSingleton, Z_Construct_UClass_UAnimSequenceExporterFBX_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceExporterFBX.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimSequenceExporterFBX>()
	{
		return UAnimSequenceExporterFBX::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceExporterFBX);
	UAnimSequenceExporterFBX::~UAnimSequenceExporterFBX() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceExporterFBX, UAnimSequenceExporterFBX::StaticClass, TEXT("UAnimSequenceExporterFBX"), &Z_Registration_Info_UClass_UAnimSequenceExporterFBX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceExporterFBX), 1645887400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_2628297176(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
