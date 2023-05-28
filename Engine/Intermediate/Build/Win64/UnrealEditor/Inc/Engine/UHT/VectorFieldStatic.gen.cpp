// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VectorField/VectorFieldStatic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldStatic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVectorFieldStatic::StaticRegisterNativesUVectorFieldStatic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVectorFieldStatic);
	UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister()
	{
		return UVectorFieldStatic::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVectorField,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "VectorFieldBounds" },
		{ "IncludePath", "VectorField/VectorFieldStatic.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Size of the vector field volume. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeZ), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "Comment", "/** Whether to keep vector field data accessible to the CPU. */" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Whether to keep vector field data accessible to the CPU." },
	};
#endif
	void Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((UVectorFieldStatic*)Obj)->bAllowCPUAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVectorFieldStatic), &Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVectorFieldStatic, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_bAllowCPUAccess,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldStatic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams = {
		&UVectorFieldStatic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldStatic()
	{
		if (!Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton, Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVectorFieldStatic.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVectorFieldStatic>()
	{
		return UVectorFieldStatic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldStatic);
	UVectorFieldStatic::~UVectorFieldStatic() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVectorFieldStatic)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVectorFieldStatic, UVectorFieldStatic::StaticClass, TEXT("UVectorFieldStatic"), &Z_Registration_Info_UClass_UVectorFieldStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVectorFieldStatic), 62191258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_1823613544(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
