// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USkeletalMeshEditorData::StaticRegisterNativesUSkeletalMeshEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshEditorData);
	UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister()
	{
		return USkeletalMeshEditorData::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SkeletalMeshEditorData is a container for non editable editor data.\n * An example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkeletalMeshEditorData.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshEditorData.h" },
		{ "ToolTip", "SkeletalMeshEditorData is a container for non editable editor data.\nAn example of data is the source import data that get updated only when we reimport an asset, but is needed if the asset need to be build. If the ddc key is uptodate the data do not have to be loaded" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams = {
		&USkeletalMeshEditorData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshEditorData()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton, Z_Construct_UClass_USkeletalMeshEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshEditorData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshEditorData>()
	{
		return USkeletalMeshEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorData);
	USkeletalMeshEditorData::~USkeletalMeshEditorData() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshEditorData)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshEditorData, USkeletalMeshEditorData::StaticClass, TEXT("USkeletalMeshEditorData"), &Z_Registration_Info_UClass_USkeletalMeshEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshEditorData), 1926579441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_2466905272(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
