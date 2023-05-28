// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveToolObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveToolObjects() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void AInternalToolFrameworkActor::StaticRegisterNativesAInternalToolFrameworkActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInternalToolFrameworkActor);
	UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister()
	{
		return AInternalToolFrameworkActor::StaticClass();
	}
	struct Z_Construct_UClass_AInternalToolFrameworkActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectableInEditor_MetaData[];
#endif
		static void NewProp_bIsSelectableInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectableInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInternalToolFrameworkActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AInternalToolFrameworkActor is a base class for internal Actors that the\n * ToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\n * may need special-case handling, for example to prevent the user from\n * selecting and deleting them. \n */" },
		{ "IncludePath", "InteractiveToolObjects.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "AInternalToolFrameworkActor is a base class for internal Actors that the\nToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors\nmay need special-case handling, for example to prevent the user from\nselecting and deleting them." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_MetaData[] = {
		{ "Comment", "/** Controls whether this InternalToolFrameworkActor can be selected in the Editor. */" },
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
		{ "ToolTip", "Controls whether this InternalToolFrameworkActor can be selected in the Editor." },
	};
#endif
	void Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_SetBit(void* Obj)
	{
		((AInternalToolFrameworkActor*)Obj)->bIsSelectableInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor = { "bIsSelectableInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AInternalToolFrameworkActor), &Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInternalToolFrameworkActor_Statics::NewProp_bIsSelectableInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInternalToolFrameworkActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInternalToolFrameworkActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams = {
		&AInternalToolFrameworkActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::PropPointers),
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInternalToolFrameworkActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInternalToolFrameworkActor()
	{
		if (!Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton, Z_Construct_UClass_AInternalToolFrameworkActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInternalToolFrameworkActor.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<AInternalToolFrameworkActor>()
	{
		return AInternalToolFrameworkActor::StaticClass();
	}
	AInternalToolFrameworkActor::AInternalToolFrameworkActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInternalToolFrameworkActor);
	AInternalToolFrameworkActor::~AInternalToolFrameworkActor() {}
	void UToolFrameworkComponent::StaticRegisterNativesUToolFrameworkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolFrameworkComponent);
	UClass* Z_Construct_UClass_UToolFrameworkComponent_NoRegister()
	{
		return UToolFrameworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UToolFrameworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolFrameworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveToolObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolFrameworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IToolFrameworkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams = {
		&UToolFrameworkComponent::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolFrameworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolFrameworkComponent()
	{
		if (!Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton, Z_Construct_UClass_UToolFrameworkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolFrameworkComponent.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UToolFrameworkComponent>()
	{
		return UToolFrameworkComponent::StaticClass();
	}
	UToolFrameworkComponent::UToolFrameworkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolFrameworkComponent);
	UToolFrameworkComponent::~UToolFrameworkComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInternalToolFrameworkActor, AInternalToolFrameworkActor::StaticClass, TEXT("AInternalToolFrameworkActor"), &Z_Registration_Info_UClass_AInternalToolFrameworkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInternalToolFrameworkActor), 1063773974U) },
		{ Z_Construct_UClass_UToolFrameworkComponent, UToolFrameworkComponent::StaticClass, TEXT("UToolFrameworkComponent"), &Z_Registration_Info_UClass_UToolFrameworkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolFrameworkComponent), 1654421247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_103469559(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
