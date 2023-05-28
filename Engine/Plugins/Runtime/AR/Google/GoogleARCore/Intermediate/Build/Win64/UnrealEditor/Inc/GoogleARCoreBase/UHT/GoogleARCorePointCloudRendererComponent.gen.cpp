// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCorePointCloudRendererComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCorePointCloudRendererComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	void UDEPRECATED_GoogleARCorePointCloudRendererComponent::StaticRegisterNativesUDEPRECATED_GoogleARCorePointCloudRendererComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GoogleARCorePointCloudRendererComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_NoRegister()
	{
		return UDEPRECATED_GoogleARCorePointCloudRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GoogleARCore" },
		{ "Comment", "/**\n * A helper component that renders the latest point cloud from the ARCore tracking session.\n * NOTE: This class is now deprecated, use UPointCloudComponent from the \"PointCloud\" plugin.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GoogleARCorePointCloudRendererComponent.h" },
		{ "ModuleRelativePath", "Public/GoogleARCorePointCloudRendererComponent.h" },
		{ "ToolTip", "A helper component that renders the latest point cloud from the ARCore tracking session.\nNOTE: This class is now deprecated, use UPointCloudComponent from the \"PointCloud\" plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointColor_MetaData[] = {
		{ "Category", "GoogleARCore|PointCloudRenderer" },
		{ "Comment", "/** The color of the point. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePointCloudRendererComponent.h" },
		{ "ToolTip", "The color of the point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCorePointCloudRendererComponent, PointColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointSize_MetaData[] = {
		{ "Category", "GoogleARCore|PointCloudRenderer" },
		{ "Comment", "/** The size of the point. */" },
		{ "ModuleRelativePath", "Public/GoogleARCorePointCloudRendererComponent.h" },
		{ "ToolTip", "The size of the point." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GoogleARCorePointCloudRendererComponent, PointSize), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::NewProp_PointSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GoogleARCorePointCloudRendererComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::ClassParams = {
		&UDEPRECATED_GoogleARCorePointCloudRendererComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UDEPRECATED_GoogleARCorePointCloudRendererComponent>()
	{
		return UDEPRECATED_GoogleARCorePointCloudRendererComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GoogleARCorePointCloudRendererComponent);
	UDEPRECATED_GoogleARCorePointCloudRendererComponent::~UDEPRECATED_GoogleARCorePointCloudRendererComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePointCloudRendererComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePointCloudRendererComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent, UDEPRECATED_GoogleARCorePointCloudRendererComponent::StaticClass, TEXT("UDEPRECATED_GoogleARCorePointCloudRendererComponent"), &Z_Registration_Info_UClass_UDEPRECATED_GoogleARCorePointCloudRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GoogleARCorePointCloudRendererComponent), 3034406359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePointCloudRendererComponent_h_3778810364(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePointCloudRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCorePointCloudRendererComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
