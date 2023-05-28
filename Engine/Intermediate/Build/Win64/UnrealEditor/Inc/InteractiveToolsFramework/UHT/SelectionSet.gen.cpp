// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USelectionSet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USelectionSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USelectionSet::StaticRegisterNativesUSelectionSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectionSet);
	UClass* Z_Construct_UClass_USelectionSet_NoRegister()
	{
		return USelectionSet::StaticClass();
	}
	struct Z_Construct_UClass_USelectionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USelectionSet is a base class for Selection objects. \n * For example the UMeshSelectionSet implementation stores information on selected\n * triangles, vertices, etc. \n */" },
		{ "IncludePath", "SelectionSet.h" },
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
		{ "ToolTip", "USelectionSet is a base class for Selection objects.\nFor example the UMeshSelectionSet implementation stores information on selected\ntriangles, vertices, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectionSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectionSet_Statics::ClassParams = {
		&USelectionSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectionSet()
	{
		if (!Z_Registration_Info_UClass_USelectionSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectionSet.OuterSingleton, Z_Construct_UClass_USelectionSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectionSet.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USelectionSet>()
	{
		return USelectionSet::StaticClass();
	}
	USelectionSet::USelectionSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectionSet);
	USelectionSet::~USelectionSet() {}
	void UMeshSelectionSet::StaticRegisterNativesUMeshSelectionSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSelectionSet);
	UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister()
	{
		return UMeshSelectionSet::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSelectionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Edges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Faces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Faces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Faces;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSelectionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USelectionSet,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMeshSelectionSet is an implementation of USelectionSet that represents selections on indexed meshes.\n * Vertices, Edges, Faces, and Groups can be selected.\n */" },
		{ "IncludePath", "SelectionSet.h" },
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
		{ "ToolTip", "UMeshSelectionSet is an implementation of USelectionSet that represents selections on indexed meshes.\nVertices, Edges, Faces, and Groups can be selected." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSelectionSet, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSelectionSet, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_Inner = { "Faces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces = { "Faces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSelectionSet, Faces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSelectionSet, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Faces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSelectionSet_Statics::NewProp_Groups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSelectionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSelectionSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSelectionSet_Statics::ClassParams = {
		&UMeshSelectionSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSelectionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSelectionSet()
	{
		if (!Z_Registration_Info_UClass_UMeshSelectionSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSelectionSet.OuterSingleton, Z_Construct_UClass_UMeshSelectionSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSelectionSet.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshSelectionSet>()
	{
		return UMeshSelectionSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSelectionSet);
	UMeshSelectionSet::~UMeshSelectionSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectionSet, USelectionSet::StaticClass, TEXT("USelectionSet"), &Z_Registration_Info_UClass_USelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectionSet), 3754694006U) },
		{ Z_Construct_UClass_UMeshSelectionSet, UMeshSelectionSet::StaticClass, TEXT("UMeshSelectionSet"), &Z_Registration_Info_UClass_UMeshSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSelectionSet), 1592792887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_4049827973(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
