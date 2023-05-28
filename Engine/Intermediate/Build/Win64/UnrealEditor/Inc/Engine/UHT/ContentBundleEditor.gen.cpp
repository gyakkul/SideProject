// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UContentBundleUnsavedActorMonitor::StaticRegisterNativesUContentBundleUnsavedActorMonitor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleUnsavedActorMonitor);
	UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor_NoRegister()
	{
		return UContentBundleUnsavedActorMonitor::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UnsavedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsavedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnsavedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEditor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_Inner = { "UnsavedActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors = { "UnsavedActors", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleUnsavedActorMonitor, UnsavedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::NewProp_UnsavedActors,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleUnsavedActorMonitor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::ClassParams = {
		&UContentBundleUnsavedActorMonitor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleUnsavedActorMonitor()
	{
		if (!Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton, Z_Construct_UClass_UContentBundleUnsavedActorMonitor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UContentBundleUnsavedActorMonitor>()
	{
		return UContentBundleUnsavedActorMonitor::StaticClass();
	}
	UContentBundleUnsavedActorMonitor::UContentBundleUnsavedActorMonitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleUnsavedActorMonitor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleUnsavedActorMonitor, UContentBundleUnsavedActorMonitor::StaticClass, TEXT("UContentBundleUnsavedActorMonitor"), &Z_Registration_Info_UClass_UContentBundleUnsavedActorMonitor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleUnsavedActorMonitor), 4103430121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_1715099306(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
