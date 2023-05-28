// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SmartObjectSubsystemRenderingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSubsystemRenderingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectSubsystemRenderingActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystemRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectSubsystemRenderingComponent::StaticRegisterNativesUSmartObjectSubsystemRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSubsystemRenderingComponent);
	UClass* Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_NoRegister()
	{
		return USmartObjectSubsystemRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectDebugRenderingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/** Rendering component for SmartObjectRendering actor. */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SmartObjectSubsystemRenderingActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/SmartObjectSubsystemRenderingActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Rendering component for SmartObjectRendering actor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSubsystemRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::ClassParams = {
		&USmartObjectSubsystemRenderingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectSubsystemRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSubsystemRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSubsystemRenderingComponent.OuterSingleton, Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSubsystemRenderingComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSubsystemRenderingComponent>()
	{
		return USmartObjectSubsystemRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSubsystemRenderingComponent);
	USmartObjectSubsystemRenderingComponent::~USmartObjectSubsystemRenderingComponent() {}
	void ASmartObjectSubsystemRenderingActor::StaticRegisterNativesASmartObjectSubsystemRenderingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmartObjectSubsystemRenderingActor);
	UClass* Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_NoRegister()
	{
		return ASmartObjectSubsystemRenderingActor::StaticClass();
	}
	struct Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectSubsystemRenderingActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/SmartObjectSubsystemRenderingActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::NewProp_RenderingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SmartObjectSubsystemRenderingActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::NewProp_RenderingComponent = { "RenderingComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASmartObjectSubsystemRenderingActor, RenderingComponent), Z_Construct_UClass_USmartObjectSubsystemRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::NewProp_RenderingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::NewProp_RenderingComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::NewProp_RenderingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartObjectSubsystemRenderingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::ClassParams = {
		&ASmartObjectSubsystemRenderingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartObjectSubsystemRenderingActor()
	{
		if (!Z_Registration_Info_UClass_ASmartObjectSubsystemRenderingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmartObjectSubsystemRenderingActor.OuterSingleton, Z_Construct_UClass_ASmartObjectSubsystemRenderingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASmartObjectSubsystemRenderingActor.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<ASmartObjectSubsystemRenderingActor>()
	{
		return ASmartObjectSubsystemRenderingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartObjectSubsystemRenderingActor);
	ASmartObjectSubsystemRenderingActor::~ASmartObjectSubsystemRenderingActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectSubsystemRenderingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectSubsystemRenderingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectSubsystemRenderingComponent, USmartObjectSubsystemRenderingComponent::StaticClass, TEXT("USmartObjectSubsystemRenderingComponent"), &Z_Registration_Info_UClass_USmartObjectSubsystemRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSubsystemRenderingComponent), 1439202780U) },
		{ Z_Construct_UClass_ASmartObjectSubsystemRenderingActor, ASmartObjectSubsystemRenderingActor::StaticClass, TEXT("ASmartObjectSubsystemRenderingActor"), &Z_Registration_Info_UClass_ASmartObjectSubsystemRenderingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmartObjectSubsystemRenderingActor), 2432010040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectSubsystemRenderingActor_h_2727532914(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectSubsystemRenderingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Private_SmartObjectSubsystemRenderingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
