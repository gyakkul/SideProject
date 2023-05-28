// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/FontBulkData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontBulkData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void UFontBulkData::StaticRegisterNativesUFontBulkData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFontBulkData);
	UClass* Z_Construct_UClass_UFontBulkData_NoRegister()
	{
		return UFontBulkData::StaticClass();
	}
	struct Z_Construct_UClass_UFontBulkData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontBulkData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fonts/FontBulkData.h" },
		{ "ModuleRelativePath", "Public/Fonts/FontBulkData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontBulkData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontBulkData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFontBulkData_Statics::ClassParams = {
		&UFontBulkData::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontBulkData()
	{
		if (!Z_Registration_Info_UClass_UFontBulkData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFontBulkData.OuterSingleton, Z_Construct_UClass_UFontBulkData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFontBulkData.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<UFontBulkData>()
	{
		return UFontBulkData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontBulkData);
	UFontBulkData::~UFontBulkData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontBulkData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFontBulkData, UFontBulkData::StaticClass, TEXT("UFontBulkData"), &Z_Registration_Info_UClass_UFontBulkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFontBulkData), 3172860074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_76176768(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontBulkData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
