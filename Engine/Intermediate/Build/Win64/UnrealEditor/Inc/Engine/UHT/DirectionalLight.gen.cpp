// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DirectionalLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADirectionalLight::StaticRegisterNativesADirectionalLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectionalLight);
	UClass* Z_Construct_UClass_ADirectionalLight_NoRegister()
	{
		return ADirectionalLight::StaticClass();
	}
	struct Z_Construct_UClass_ADirectionalLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectionalLightComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectionalLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectionalLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights DirectionalLights" },
		{ "Comment", "/**\n * Implements a directional light actor.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Engine/DirectionalLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/DirectionalLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements a directional light actor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectionalLight_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DirectionalLight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADirectionalLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADirectionalLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADirectionalLight_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectionalLight_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectionalLight_Statics::NewProp_DirectionalLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/* EditorOnly reference to the light component to allow it to be displayed in the details panel correctly */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DirectionalLight.h" },
		{ "ToolTip", "EditorOnly reference to the light component to allow it to be displayed in the details panel correctly" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADirectionalLight_Statics::NewProp_DirectionalLightComponent = { "DirectionalLightComponent", nullptr, (EPropertyFlags)0x00440008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADirectionalLight, DirectionalLightComponent), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADirectionalLight_Statics::NewProp_DirectionalLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectionalLight_Statics::NewProp_DirectionalLightComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADirectionalLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectionalLight_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectionalLight_Statics::NewProp_DirectionalLightComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectionalLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectionalLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectionalLight_Statics::ClassParams = {
		&ADirectionalLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ADirectionalLight_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectionalLight_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADirectionalLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectionalLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectionalLight()
	{
		if (!Z_Registration_Info_UClass_ADirectionalLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectionalLight.OuterSingleton, Z_Construct_UClass_ADirectionalLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADirectionalLight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ADirectionalLight>()
	{
		return ADirectionalLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectionalLight);
	ADirectionalLight::~ADirectionalLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADirectionalLight, ADirectionalLight::StaticClass, TEXT("ADirectionalLight"), &Z_Registration_Info_UClass_ADirectionalLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectionalLight), 3808743336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_1158580136(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DirectionalLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
