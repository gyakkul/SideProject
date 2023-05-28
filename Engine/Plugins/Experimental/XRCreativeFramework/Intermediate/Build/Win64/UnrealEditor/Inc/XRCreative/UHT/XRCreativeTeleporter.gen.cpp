// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeTeleporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeTeleporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTeleporter();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTeleporter_NoRegister();
// End Cross Module References
	void AXRCreativeTeleporter::StaticRegisterNativesAXRCreativeTeleporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeTeleporter);
	UClass* Z_Construct_UClass_AXRCreativeTeleporter_NoRegister()
	{
		return AXRCreativeTeleporter::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeTeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeleportMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeTeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTeleporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeTeleporter.h" },
		{ "ModuleRelativePath", "Public/XRCreativeTeleporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "XR Creative Teleporter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeTeleporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeTeleporter, LeftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "XR Creative Teleporter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeTeleporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeTeleporter, RightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_TeleportMesh_MetaData[] = {
		{ "Category", "XR Creative Teleporter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeTeleporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_TeleportMesh = { "TeleportMesh", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeTeleporter, TeleportMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_TeleportMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_TeleportMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXRCreativeTeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_LeftController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_RightController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeTeleporter_Statics::NewProp_TeleportMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeTeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeTeleporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeTeleporter_Statics::ClassParams = {
		&AXRCreativeTeleporter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AXRCreativeTeleporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTeleporter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTeleporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeTeleporter()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeTeleporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeTeleporter.OuterSingleton, Z_Construct_UClass_AXRCreativeTeleporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeTeleporter.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeTeleporter>()
	{
		return AXRCreativeTeleporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeTeleporter);
	AXRCreativeTeleporter::~AXRCreativeTeleporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeTeleporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeTeleporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AXRCreativeTeleporter, AXRCreativeTeleporter::StaticClass, TEXT("AXRCreativeTeleporter"), &Z_Registration_Info_UClass_AXRCreativeTeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeTeleporter), 3844837742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeTeleporter_h_517141987(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeTeleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeTeleporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
