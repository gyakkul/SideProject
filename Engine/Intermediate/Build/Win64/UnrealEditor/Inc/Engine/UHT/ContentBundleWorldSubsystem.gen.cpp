// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleWorldSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleManager();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UContentBundleManager::StaticRegisterNativesUContentBundleManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleManager);
	UClass* Z_Construct_UClass_UContentBundleManager_NoRegister()
	{
		return UContentBundleManager::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEDuplicateHelper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PIEDuplicateHelper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper = { "PIEDuplicateHelper", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleManager, PIEDuplicateHelper), Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleManager_Statics::NewProp_PIEDuplicateHelper,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleManager_Statics::ClassParams = {
		&UContentBundleManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleManager_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleManager()
	{
		if (!Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton, Z_Construct_UClass_UContentBundleManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UContentBundleManager>()
	{
		return UContentBundleManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleManager);
	UContentBundleManager::~UContentBundleManager() {}
	void UContentBundleDuplicateForPIEHelper::StaticRegisterNativesUContentBundleDuplicateForPIEHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleDuplicateForPIEHelper);
	UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_NoRegister()
	{
		return UContentBundleDuplicateForPIEHelper::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingObjects_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StreamingObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_ValueProp = { "StreamingObjects", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_Key_KeyProp = { "StreamingObjects_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleWorldSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects = { "StreamingObjects", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleDuplicateForPIEHelper, StreamingObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::NewProp_StreamingObjects,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleDuplicateForPIEHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::ClassParams = {
		&UContentBundleDuplicateForPIEHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleDuplicateForPIEHelper()
	{
		if (!Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton, Z_Construct_UClass_UContentBundleDuplicateForPIEHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UContentBundleDuplicateForPIEHelper>()
	{
		return UContentBundleDuplicateForPIEHelper::StaticClass();
	}
	UContentBundleDuplicateForPIEHelper::UContentBundleDuplicateForPIEHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleDuplicateForPIEHelper);
	UContentBundleDuplicateForPIEHelper::~UContentBundleDuplicateForPIEHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleManager, UContentBundleManager::StaticClass, TEXT("UContentBundleManager"), &Z_Registration_Info_UClass_UContentBundleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleManager), 3235925674U) },
		{ Z_Construct_UClass_UContentBundleDuplicateForPIEHelper, UContentBundleDuplicateForPIEHelper::StaticClass, TEXT("UContentBundleDuplicateForPIEHelper"), &Z_Registration_Info_UClass_UContentBundleDuplicateForPIEHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleDuplicateForPIEHelper), 3911850575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_193373206(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
