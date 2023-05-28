// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualHeightfieldMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualHeightfieldMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualHeightfieldMesh();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_AVirtualHeightfieldMesh();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_AVirtualHeightfieldMesh_NoRegister();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister();
// End Cross Module References
	void AVirtualHeightfieldMesh::StaticRegisterNativesAVirtualHeightfieldMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVirtualHeightfieldMesh);
	UClass* Z_Construct_UClass_AVirtualHeightfieldMesh_NoRegister()
	{
		return AVirtualHeightfieldMesh::StaticClass();
	}
	struct Z_Construct_UClass_AVirtualHeightfieldMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualHeightfieldMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualHeightfieldMeshComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Box;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualHeightfieldMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Collision Cooking Input LOD Replication" },
		{ "IncludePath", "VirtualHeightfieldMeshActor.h" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_VirtualHeightfieldMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Component for rendering the big mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshActor.h" },
		{ "ToolTip", "Component for rendering the big mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_VirtualHeightfieldMeshComponent = { "VirtualHeightfieldMeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualHeightfieldMesh, VirtualHeightfieldMeshComponent), Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_VirtualHeightfieldMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_VirtualHeightfieldMeshComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/** Box for visualizing virtual texture extents. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshActor.h" },
		{ "ToolTip", "Box for visualizing virtual texture extents." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualHeightfieldMesh, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_Box_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_VirtualHeightfieldMeshComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirtualHeightfieldMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::ClassParams = {
		&AVirtualHeightfieldMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirtualHeightfieldMesh()
	{
		if (!Z_Registration_Info_UClass_AVirtualHeightfieldMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVirtualHeightfieldMesh.OuterSingleton, Z_Construct_UClass_AVirtualHeightfieldMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVirtualHeightfieldMesh.OuterSingleton;
	}
	template<> VIRTUALHEIGHTFIELDMESH_API UClass* StaticClass<AVirtualHeightfieldMesh>()
	{
		return AVirtualHeightfieldMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVirtualHeightfieldMesh);
	AVirtualHeightfieldMesh::~AVirtualHeightfieldMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVirtualHeightfieldMesh, AVirtualHeightfieldMesh::StaticClass, TEXT("AVirtualHeightfieldMesh"), &Z_Registration_Info_UClass_AVirtualHeightfieldMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVirtualHeightfieldMesh), 3378470104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_1590075478(TEXT("/Script/VirtualHeightfieldMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
