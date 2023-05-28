// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_Camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_Camera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Camera();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Camera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSensor_Camera::StaticRegisterNativesUMLAdapterSensor_Camera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_Camera);
	UClass* Z_Construct_UClass_UMLAdapterSensor_Camera_NoRegister()
	{
		return UMLAdapterSensor_Camera::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUI_MetaData[];
#endif
		static void NewProp_bShowUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedViewportClient_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedViewportClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Observing player's camera */" },
		{ "IncludePath", "Sensors/MLAdapterSensor_Camera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Observing player's camera" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Camera, Width), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Camera, Height), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI_SetBit(void* Obj)
	{
		((UMLAdapterSensor_Camera*)Obj)->bShowUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI = { "bShowUI", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor_Camera), &Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CaptureComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CaptureComp = { "CaptureComp", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Camera, CaptureComp), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CaptureComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CaptureComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_RenderTarget2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_RenderTarget2D = { "RenderTarget2D", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Camera, RenderTarget2D), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_RenderTarget2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_RenderTarget2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CachedViewportClient_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Camera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CachedViewportClient = { "CachedViewportClient", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Camera, CachedViewportClient), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CachedViewportClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CachedViewportClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_bShowUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CaptureComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_RenderTarget2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::NewProp_CachedViewportClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_Camera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::ClassParams = {
		&UMLAdapterSensor_Camera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_Camera()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_Camera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_Camera.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_Camera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_Camera.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_Camera>()
	{
		return UMLAdapterSensor_Camera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_Camera);
	UMLAdapterSensor_Camera::~UMLAdapterSensor_Camera() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_Camera, UMLAdapterSensor_Camera::StaticClass, TEXT("UMLAdapterSensor_Camera"), &Z_Registration_Info_UClass_UMLAdapterSensor_Camera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_Camera), 1603107789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_2178792744(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Camera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
