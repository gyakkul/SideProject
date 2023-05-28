// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/ExportTextContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportTextContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UExportTextContainer();
	UNREALED_API UClass* Z_Construct_UClass_UExportTextContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UExportTextContainer::StaticRegisterNativesUExportTextContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExportTextContainer);
	UClass* Z_Construct_UClass_UExportTextContainer_NoRegister()
	{
		return UExportTextContainer::StaticClass();
	}
	struct Z_Construct_UClass_UExportTextContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportTextContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/ExportTextContainer.h" },
		{ "ModuleRelativePath", "Classes/Exporters/ExportTextContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData[] = {
		{ "Comment", "/** ExportText representation of one or more objects */" },
		{ "ModuleRelativePath", "Classes/Exporters/ExportTextContainer.h" },
		{ "ToolTip", "ExportText representation of one or more objects" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText = { "ExportText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExportTextContainer, ExportText), METADATA_PARAMS(Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportTextContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportTextContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportTextContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExportTextContainer_Statics::ClassParams = {
		&UExportTextContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExportTextContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportTextContainer()
	{
		if (!Z_Registration_Info_UClass_UExportTextContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExportTextContainer.OuterSingleton, Z_Construct_UClass_UExportTextContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExportTextContainer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UExportTextContainer>()
	{
		return UExportTextContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportTextContainer);
	UExportTextContainer::~UExportTextContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExportTextContainer, UExportTextContainer::StaticClass, TEXT("UExportTextContainer"), &Z_Registration_Info_UClass_UExportTextContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExportTextContainer), 116481985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_441911265(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
