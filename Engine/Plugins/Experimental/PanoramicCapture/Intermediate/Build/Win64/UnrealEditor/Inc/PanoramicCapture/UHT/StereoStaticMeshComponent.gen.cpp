// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StereoStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister();
	PANORAMICCAPTURE_API UEnum* Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESPStereoCameraLayer;
	static UEnum* ESPStereoCameraLayer_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESPStereoCameraLayer.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESPStereoCameraLayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer, (UObject*)Z_Construct_UPackage__Script_PanoramicCapture(), TEXT("ESPStereoCameraLayer"));
		}
		return Z_Registration_Info_UEnum_ESPStereoCameraLayer.OuterSingleton;
	}
	template<> PANORAMICCAPTURE_API UEnum* StaticEnum<ESPStereoCameraLayer>()
	{
		return ESPStereoCameraLayer_StaticEnum();
	}
	struct Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enumerators[] = {
		{ "ESPStereoCameraLayer::LeftEye", (int64)ESPStereoCameraLayer::LeftEye },
		{ "ESPStereoCameraLayer::RightEye", (int64)ESPStereoCameraLayer::RightEye },
		{ "ESPStereoCameraLayer::BothEyes", (int64)ESPStereoCameraLayer::BothEyes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BothEyes.Name", "ESPStereoCameraLayer::BothEyes" },
		{ "LeftEye.Name", "ESPStereoCameraLayer::LeftEye" },
		{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
		{ "RightEye.Name", "ESPStereoCameraLayer::RightEye" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PanoramicCapture,
		nullptr,
		"ESPStereoCameraLayer",
		"ESPStereoCameraLayer",
		Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer()
	{
		if (!Z_Registration_Info_UEnum_ESPStereoCameraLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESPStereoCameraLayer.InnerSingleton, Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESPStereoCameraLayer.InnerSingleton;
	}
	void UStereoStaticMeshComponent::StaticRegisterNativesUStereoStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStereoStaticMeshComponent);
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent_NoRegister()
	{
		return UStereoStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStereoStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EyeToRender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeToRender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EyeToRender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Object Activation Components|Activation Trigger" },
		{ "IncludePath", "StereoStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Private/StereoStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender = { "EyeToRender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStereoStaticMeshComponent, EyeToRender), Z_Construct_UEnum_PanoramicCapture_ESPStereoCameraLayer, METADATA_PARAMS(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_MetaData)) }; // 3743795625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoStaticMeshComponent_Statics::NewProp_EyeToRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStereoStaticMeshComponent_Statics::ClassParams = {
		&UStereoStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStereoStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UStereoStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStereoStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UStereoStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStereoStaticMeshComponent.OuterSingleton;
	}
	template<> PANORAMICCAPTURE_API UClass* StaticClass<UStereoStaticMeshComponent>()
	{
		return UStereoStaticMeshComponent::StaticClass();
	}
	UStereoStaticMeshComponent::UStereoStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoStaticMeshComponent);
	UStereoStaticMeshComponent::~UStereoStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::EnumInfo[] = {
		{ ESPStereoCameraLayer_StaticEnum, TEXT("ESPStereoCameraLayer"), &Z_Registration_Info_UEnum_ESPStereoCameraLayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3743795625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStereoStaticMeshComponent, UStereoStaticMeshComponent::StaticClass, TEXT("UStereoStaticMeshComponent"), &Z_Registration_Info_UClass_UStereoStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStereoStaticMeshComponent), 1794661204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_131177912(TEXT("/Script/PanoramicCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_StereoStaticMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
