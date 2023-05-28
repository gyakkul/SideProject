// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/RuntimeVirtualTextureVolume.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume();
	ENGINE_API UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ARuntimeVirtualTextureVolume::StaticRegisterNativesARuntimeVirtualTextureVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARuntimeVirtualTextureVolume);
	UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister()
	{
		return ARuntimeVirtualTextureVolume::StaticClass();
	}
	struct Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualTextureComponent;
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
	UObject* (*const Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Actor Collision Cooking Input LOD Physics Replication Rendering" },
		{ "IncludePath", "VT/RuntimeVirtualTextureVolume.h" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Actor used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Component that owns the runtime virtual texture. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Component that owns the runtime virtual texture." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent = { "VirtualTextureComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARuntimeVirtualTextureVolume, VirtualTextureComponent), Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData[] = {
		{ "Comment", "/** Box for visualizing virtual texture extents. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTextureVolume.h" },
		{ "ToolTip", "Box for visualizing virtual texture extents." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARuntimeVirtualTextureVolume, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_VirtualTextureComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARuntimeVirtualTextureVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::ClassParams = {
		&ARuntimeVirtualTextureVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume()
	{
		if (!Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.OuterSingleton, Z_Construct_UClass_ARuntimeVirtualTextureVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ARuntimeVirtualTextureVolume>()
	{
		return ARuntimeVirtualTextureVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeVirtualTextureVolume);
	ARuntimeVirtualTextureVolume::~ARuntimeVirtualTextureVolume() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ARuntimeVirtualTextureVolume)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARuntimeVirtualTextureVolume, ARuntimeVirtualTextureVolume::StaticClass, TEXT("ARuntimeVirtualTextureVolume"), &Z_Registration_Info_UClass_ARuntimeVirtualTextureVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARuntimeVirtualTextureVolume), 473530932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_2573246858(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTextureVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
