// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MEDIAPLATE_API UClass* Z_Construct_UClass_AMediaPlate();
	MEDIAPLATE_API UClass* Z_Construct_UClass_AMediaPlate_NoRegister();
	MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References
	void AMediaPlate::StaticRegisterNativesAMediaPlate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMediaPlate);
	UClass* Z_Construct_UClass_AMediaPlate_NoRegister()
	{
		return AMediaPlate::StaticClass();
	}
	struct Z_Construct_UClass_AMediaPlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlateComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediaPlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaPlate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MediaPlate is an actor that can play and show media in the world.\n */" },
		{ "IncludePath", "MediaPlate.h" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
		{ "ToolTip", "MediaPlate is an actor that can play and show media in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "//~ End AActor Interface\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent = { "MediaPlateComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaPlate, MediaPlateComponent), Z_Construct_UClass_UMediaPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Holds the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlate.h" },
		{ "ToolTip", "Holds the mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaPlate, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMediaPlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaPlate_Statics::NewProp_MediaPlateComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaPlate_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediaPlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediaPlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMediaPlate_Statics::ClassParams = {
		&AMediaPlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMediaPlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMediaPlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaPlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediaPlate()
	{
		if (!Z_Registration_Info_UClass_AMediaPlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMediaPlate.OuterSingleton, Z_Construct_UClass_AMediaPlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMediaPlate.OuterSingleton;
	}
	template<> MEDIAPLATE_API UClass* StaticClass<AMediaPlate>()
	{
		return AMediaPlate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediaPlate);
	AMediaPlate::~AMediaPlate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMediaPlate, AMediaPlate::StaticClass, TEXT("AMediaPlate"), &Z_Registration_Info_UClass_AMediaPlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMediaPlate), 3578135875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_2620154540(TEXT("/Script/MediaPlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
