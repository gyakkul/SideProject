// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionLevelStreamingDynamic::StaticRegisterNativesUWorldPartitionLevelStreamingDynamic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionLevelStreamingDynamic);
	UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister()
	{
		return UWorldPartitionLevelStreamingDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeLevel;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeAlwaysLoaded_MetaData[];
#endif
		static void NewProp_bShouldBeAlwaysLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeAlwaysLoaded;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsavedActorsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnsavedActorsContainer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingCell_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StreamingCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterWorldPartition_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OuterWorldPartition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreamingDynamic,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_RuntimeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_RuntimeLevel = { "RuntimeLevel", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingDynamic, RuntimeLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_RuntimeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_RuntimeLevel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded_SetBit(void* Obj)
	{
		((UWorldPartitionLevelStreamingDynamic*)Obj)->bShouldBeAlwaysLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded = { "bShouldBeAlwaysLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionLevelStreamingDynamic), &Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_UnsavedActorsContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_UnsavedActorsContainer = { "UnsavedActorsContainer", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingDynamic, UnsavedActorsContainer), Z_Construct_UClass_UActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_UnsavedActorsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_UnsavedActorsContainer_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_StreamingCell_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_StreamingCell = { "StreamingCell", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingDynamic, StreamingCell), Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_StreamingCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_StreamingCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_OuterWorldPartition_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingDynamic.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_OuterWorldPartition = { "OuterWorldPartition", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingDynamic, OuterWorldPartition), Z_Construct_UClass_UWorldPartition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_OuterWorldPartition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_OuterWorldPartition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_RuntimeLevel,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_bShouldBeAlwaysLoaded,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_UnsavedActorsContainer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_StreamingCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::NewProp_OuterWorldPartition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionLevelStreamingDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::ClassParams = {
		&UWorldPartitionLevelStreamingDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton, Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionLevelStreamingDynamic>()
	{
		return UWorldPartitionLevelStreamingDynamic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionLevelStreamingDynamic);
	UWorldPartitionLevelStreamingDynamic::~UWorldPartitionLevelStreamingDynamic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic, UWorldPartitionLevelStreamingDynamic::StaticClass, TEXT("UWorldPartitionLevelStreamingDynamic"), &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionLevelStreamingDynamic), 3341157694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h_2162054757(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingDynamic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
