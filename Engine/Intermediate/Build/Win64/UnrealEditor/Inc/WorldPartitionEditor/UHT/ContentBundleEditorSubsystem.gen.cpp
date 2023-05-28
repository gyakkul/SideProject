// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionEditor();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditingSubmodule();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditingSubmodule_NoRegister();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditorSubsystem();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditorSubsystem_NoRegister();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditorSubsystemModule();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UContentBundleEditorSubsystemModule_NoRegister();
// End Cross Module References
	void UContentBundleEditorSubsystemModule::StaticRegisterNativesUContentBundleEditorSubsystemModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleEditorSubsystemModule);
	UClass* Z_Construct_UClass_UContentBundleEditorSubsystemModule_NoRegister()
	{
		return UContentBundleEditorSubsystemModule::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleEditorSubsystemModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::ClassParams = {
		&UContentBundleEditorSubsystemModule::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleEditorSubsystemModule()
	{
		if (!Z_Registration_Info_UClass_UContentBundleEditorSubsystemModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleEditorSubsystemModule.OuterSingleton, Z_Construct_UClass_UContentBundleEditorSubsystemModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleEditorSubsystemModule.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UContentBundleEditorSubsystemModule>()
	{
		return UContentBundleEditorSubsystemModule::StaticClass();
	}
	UContentBundleEditorSubsystemModule::UContentBundleEditorSubsystemModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleEditorSubsystemModule);
	UContentBundleEditorSubsystemModule::~UContentBundleEditorSubsystemModule() {}
	void UContentBundleEditingSubmodule::StaticRegisterNativesUContentBundleEditingSubmodule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleEditingSubmodule);
	UClass* Z_Construct_UClass_UContentBundleEditingSubmodule_NoRegister()
	{
		return UContentBundleEditingSubmodule::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleEditingSubmodule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditingContentBundlesStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditingContentBundlesStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditingContentBundlesStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditingContentBundleGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditingContentBundleGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBundleEditorSubsystemModule,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack_Inner = { "EditingContentBundlesStack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack = { "EditingContentBundlesStack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleEditingSubmodule, EditingContentBundlesStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundleGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundleGuid = { "EditingContentBundleGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleEditingSubmodule, EditingContentBundleGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundleGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundleGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundlesStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::NewProp_EditingContentBundleGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleEditingSubmodule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::ClassParams = {
		&UContentBundleEditingSubmodule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleEditingSubmodule()
	{
		if (!Z_Registration_Info_UClass_UContentBundleEditingSubmodule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleEditingSubmodule.OuterSingleton, Z_Construct_UClass_UContentBundleEditingSubmodule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleEditingSubmodule.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UContentBundleEditingSubmodule>()
	{
		return UContentBundleEditingSubmodule::StaticClass();
	}
	UContentBundleEditingSubmodule::UContentBundleEditingSubmodule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleEditingSubmodule);
	UContentBundleEditingSubmodule::~UContentBundleEditingSubmodule() {}
	void UContentBundleEditorSubsystem::StaticRegisterNativesUContentBundleEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleEditorSubsystem);
	UClass* Z_Construct_UClass_UContentBundleEditorSubsystem_NoRegister()
	{
		return UContentBundleEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleEditingSubModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContentBundleEditingSubModule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::NewProp_ContentBundleEditingSubModule_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::NewProp_ContentBundleEditingSubModule = { "ContentBundleEditingSubModule", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleEditorSubsystem, ContentBundleEditingSubModule), Z_Construct_UClass_UContentBundleEditingSubmodule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::NewProp_ContentBundleEditingSubModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::NewProp_ContentBundleEditingSubModule_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::NewProp_ContentBundleEditingSubModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::ClassParams = {
		&UContentBundleEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UContentBundleEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleEditorSubsystem.OuterSingleton, Z_Construct_UClass_UContentBundleEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleEditorSubsystem.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UContentBundleEditorSubsystem>()
	{
		return UContentBundleEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleEditorSubsystem);
	UContentBundleEditorSubsystem::~UContentBundleEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_ContentBundle_ContentBundleEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_ContentBundle_ContentBundleEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleEditorSubsystemModule, UContentBundleEditorSubsystemModule::StaticClass, TEXT("UContentBundleEditorSubsystemModule"), &Z_Registration_Info_UClass_UContentBundleEditorSubsystemModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleEditorSubsystemModule), 100924692U) },
		{ Z_Construct_UClass_UContentBundleEditingSubmodule, UContentBundleEditingSubmodule::StaticClass, TEXT("UContentBundleEditingSubmodule"), &Z_Registration_Info_UClass_UContentBundleEditingSubmodule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleEditingSubmodule), 3722089647U) },
		{ Z_Construct_UClass_UContentBundleEditorSubsystem, UContentBundleEditorSubsystem::StaticClass, TEXT("UContentBundleEditorSubsystem"), &Z_Registration_Info_UClass_UContentBundleEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleEditorSubsystem), 453864078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_ContentBundle_ContentBundleEditorSubsystem_h_1290483588(TEXT("/Script/WorldPartitionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_ContentBundle_ContentBundleEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_ContentBundle_ContentBundleEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
