// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDescriptionBaseBulkData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescriptionBaseBulkData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBase_NoRegister();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
// End Cross Module References
	void UMeshDescriptionBaseBulkData::StaticRegisterNativesUMeshDescriptionBaseBulkData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDescriptionBaseBulkData);
	UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister()
	{
		return UMeshDescriptionBaseBulkData::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreallocatedMeshDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreallocatedMeshDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UObject wrapper for FMeshDescriptionBulkData\n */" },
		{ "IncludePath", "MeshDescriptionBaseBulkData.h" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBaseBulkData.h" },
		{ "ToolTip", "UObject wrapper for FMeshDescriptionBulkData" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_PreallocatedMeshDescription_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshDescriptionBaseBulkData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_PreallocatedMeshDescription = { "PreallocatedMeshDescription", nullptr, (EPropertyFlags)0x0026080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshDescriptionBaseBulkData, PreallocatedMeshDescription), Z_Construct_UClass_UMeshDescriptionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_PreallocatedMeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_PreallocatedMeshDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_MeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshDescriptionBaseBulkData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_MeshDescription = { "MeshDescription", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshDescriptionBaseBulkData, MeshDescription), Z_Construct_UClass_UMeshDescriptionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_MeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_MeshDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_PreallocatedMeshDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::NewProp_MeshDescription,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDescriptionBaseBulkData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::ClassParams = {
		&UMeshDescriptionBaseBulkData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData()
	{
		if (!Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton, Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.OuterSingleton;
	}
	template<> MESHDESCRIPTION_API UClass* StaticClass<UMeshDescriptionBaseBulkData>()
	{
		return UMeshDescriptionBaseBulkData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDescriptionBaseBulkData);
	UMeshDescriptionBaseBulkData::~UMeshDescriptionBaseBulkData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBaseBulkData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDescriptionBaseBulkData, UMeshDescriptionBaseBulkData::StaticClass, TEXT("UMeshDescriptionBaseBulkData"), &Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDescriptionBaseBulkData), 2017886692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_562273454(TEXT("/Script/MeshDescription"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
