// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithRuntimeUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithRuntimeUtils() {}
// Cross Module References
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_URuntimeMesh();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh();
	UPackage* Z_Construct_UPackage__Script_DatasmithRuntime();
// End Cross Module References
	void URuntimeMesh::StaticRegisterNativesURuntimeMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeMesh);
	UClass* Z_Construct_UClass_URuntimeMesh_NoRegister()
	{
		return URuntimeMesh::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class deriving from UStaticMesh to allow the cooking of collision meshes at runtime\n// To do so, bAllowCPUAccess must be true AND  the metod GetWorld() must return a valid world\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DatasmithRuntimeUtils.h" },
		{ "ModuleRelativePath", "Private/DatasmithRuntimeUtils.h" },
		{ "ToolTip", "Class deriving from UStaticMesh to allow the cooking of collision meshes at runtime\nTo do so, bAllowCPUAccess must be true AND  the metod GetWorld() must return a valid world" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMesh_Statics::ClassParams = {
		&URuntimeMesh::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMesh()
	{
		if (!Z_Registration_Info_UClass_URuntimeMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeMesh.OuterSingleton, Z_Construct_UClass_URuntimeMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeMesh.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<URuntimeMesh>()
	{
		return URuntimeMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMesh);
	URuntimeMesh::~URuntimeMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeMesh, URuntimeMesh::StaticClass, TEXT("URuntimeMesh"), &Z_Registration_Info_UClass_URuntimeMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeMesh), 3385694374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_1964158155(TEXT("/Script/DatasmithRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
