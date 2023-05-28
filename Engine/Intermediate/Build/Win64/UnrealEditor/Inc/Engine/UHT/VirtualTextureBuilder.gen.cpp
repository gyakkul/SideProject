// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/VirtualTextureBuilder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuilder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVirtualTextureBuilder::StaticRegisterNativesUVirtualTextureBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTextureBuilder);
	UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister()
	{
		return UVirtualTextureBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTextureBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildHash_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_BuildHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTextureBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\n * This has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\n * or other more blueprint driven approaches for data generation.\n */" },
		{ "IncludePath", "VT/VirtualTextureBuilder.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Container for a UVirtualTexture2D that can be built from a FVirtualTextureBuildDesc description.\nThis has a simple BuildTexture() interface but we may want to extend in the future to support partial builds\nor other more blueprint driven approaches for data generation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The UTexture object. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "The UTexture object." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualTextureBuilder, Texture), Z_Construct_UClass_UVirtualTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData[] = {
		{ "Comment", "/** Some client defined hash of that defines how the Texture was built. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuilder.h" },
		{ "ToolTip", "Some client defined hash of that defines how the Texture was built." },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash = { "BuildHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualTextureBuilder, BuildHash), METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTextureBuilder_Statics::NewProp_BuildHash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTextureBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTextureBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams = {
		&UVirtualTextureBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTextureBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTextureBuilder()
	{
		if (!Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton, Z_Construct_UClass_UVirtualTextureBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTextureBuilder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVirtualTextureBuilder>()
	{
		return UVirtualTextureBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTextureBuilder);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTextureBuilder)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTextureBuilder, UVirtualTextureBuilder::StaticClass, TEXT("UVirtualTextureBuilder"), &Z_Registration_Info_UClass_UVirtualTextureBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTextureBuilder), 109336646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_1829933213(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
