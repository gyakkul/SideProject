// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionDataLayerToAssetCommandLet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATALAYEREDITOR_API UClass* Z_Construct_UClass_UDataLayerFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerConversionInfo();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerConversionInfo_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerToAssetCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerToAssetCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerToAssetCommandletContext();
	UNREALED_API UClass* Z_Construct_UClass_UDataLayerToAssetCommandletContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDataLayerConversionInfo::StaticRegisterNativesUDataLayerConversionInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerConversionInfo);
	UClass* Z_Construct_UClass_UDataLayerConversionInfo_NoRegister()
	{
		return UDataLayerConversionInfo::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerConversionInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerToConvert_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerToConvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerInstance;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PreviousConversionsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousConversionsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousConversionsInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConvertingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentConvertingInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerConversionInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerToConvert_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerToConvert = { "DataLayerToConvert", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerConversionInfo, DataLayerToConvert), Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerToConvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerToConvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerAsset = { "DataLayerAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerConversionInfo, DataLayerAsset), Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerInstance = { "DataLayerInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerConversionInfo, DataLayerInstance), Z_Construct_UClass_UDataLayerInstanceWithAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerInstance_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo_Inner = { "PreviousConversionsInfo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerConversionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo = { "PreviousConversionsInfo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerConversionInfo, PreviousConversionsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_CurrentConvertingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_CurrentConvertingInfo = { "CurrentConvertingInfo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerConversionInfo, CurrentConvertingInfo), Z_Construct_UClass_UDataLayerConversionInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_CurrentConvertingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_CurrentConvertingInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerConversionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerToConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_DataLayerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_PreviousConversionsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerConversionInfo_Statics::NewProp_CurrentConvertingInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerConversionInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerConversionInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerConversionInfo_Statics::ClassParams = {
		&UDataLayerConversionInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataLayerConversionInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerConversionInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerConversionInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerConversionInfo()
	{
		if (!Z_Registration_Info_UClass_UDataLayerConversionInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerConversionInfo.OuterSingleton, Z_Construct_UClass_UDataLayerConversionInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerConversionInfo.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDataLayerConversionInfo>()
	{
		return UDataLayerConversionInfo::StaticClass();
	}
	UDataLayerConversionInfo::UDataLayerConversionInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerConversionInfo);
	UDataLayerConversionInfo::~UDataLayerConversionInfo() {}
	void UDataLayerToAssetCommandletContext::StaticRegisterNativesUDataLayerToAssetCommandletContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerToAssetCommandletContext);
	UClass* Z_Construct_UClass_UDataLayerToAssetCommandletContext_NoRegister()
	{
		return UDataLayerToAssetCommandletContext::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerConversionInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerConversionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayerConversionInfo;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ConvertingDataLayerInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertingDataLayerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvertingDataLayerInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo_Inner = { "DataLayerConversionInfo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerConversionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo = { "DataLayerConversionInfo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandletContext, DataLayerConversionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo_Inner = { "ConvertingDataLayerInfo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerConversionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo = { "ConvertingDataLayerInfo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandletContext, ConvertingDataLayerInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_DataLayerConversionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::NewProp_ConvertingDataLayerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerToAssetCommandletContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::ClassParams = {
		&UDataLayerToAssetCommandletContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerToAssetCommandletContext()
	{
		if (!Z_Registration_Info_UClass_UDataLayerToAssetCommandletContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerToAssetCommandletContext.OuterSingleton, Z_Construct_UClass_UDataLayerToAssetCommandletContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerToAssetCommandletContext.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDataLayerToAssetCommandletContext>()
	{
		return UDataLayerToAssetCommandletContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerToAssetCommandletContext);
	UDataLayerToAssetCommandletContext::~UDataLayerToAssetCommandletContext() {}
	void UDataLayerToAssetCommandlet::StaticRegisterNativesUDataLayerToAssetCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerToAssetCommandlet);
	UClass* Z_Construct_UClass_UDataLayerToAssetCommandlet_NoRegister()
	{
		return UDataLayerToAssetCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConversionFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformSavePackages_MetaData[];
#endif
		static void NewProp_bPerformSavePackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformSavePackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreActorLoadingErrors_MetaData[];
#endif
		static void NewProp_bIgnoreActorLoadingErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreActorLoadingErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataLayerFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DestinationFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DestinationFolder = { "DestinationFolder", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandlet, DestinationFolder), METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DestinationFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DestinationFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_ConversionFolder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_ConversionFolder = { "ConversionFolder", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandlet, ConversionFolder), METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_ConversionFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_ConversionFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	void Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages_SetBit(void* Obj)
	{
		((UDataLayerToAssetCommandlet*)Obj)->bPerformSavePackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages = { "bPerformSavePackages", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataLayerToAssetCommandlet), &Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	void Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors_SetBit(void* Obj)
	{
		((UDataLayerToAssetCommandlet*)Obj)->bIgnoreActorLoadingErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors = { "bIgnoreActorLoadingErrors", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataLayerToAssetCommandlet), &Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DataLayerFactory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DataLayerFactory = { "DataLayerFactory", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandlet, DataLayerFactory), Z_Construct_UClass_UDataLayerFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DataLayerFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DataLayerFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_MainWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionDataLayerToAssetCommandLet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_MainWorld = { "MainWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataLayerToAssetCommandlet, MainWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_MainWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_MainWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DestinationFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_ConversionFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bPerformSavePackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_bIgnoreActorLoadingErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_DataLayerFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::NewProp_MainWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerToAssetCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::ClassParams = {
		&UDataLayerToAssetCommandlet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerToAssetCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDataLayerToAssetCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerToAssetCommandlet.OuterSingleton, Z_Construct_UClass_UDataLayerToAssetCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerToAssetCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDataLayerToAssetCommandlet>()
	{
		return UDataLayerToAssetCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerToAssetCommandlet);
	UDataLayerToAssetCommandlet::~UDataLayerToAssetCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerConversionInfo, UDataLayerConversionInfo::StaticClass, TEXT("UDataLayerConversionInfo"), &Z_Registration_Info_UClass_UDataLayerConversionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerConversionInfo), 2065946603U) },
		{ Z_Construct_UClass_UDataLayerToAssetCommandletContext, UDataLayerToAssetCommandletContext::StaticClass, TEXT("UDataLayerToAssetCommandletContext"), &Z_Registration_Info_UClass_UDataLayerToAssetCommandletContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerToAssetCommandletContext), 868641972U) },
		{ Z_Construct_UClass_UDataLayerToAssetCommandlet, UDataLayerToAssetCommandlet::StaticClass, TEXT("UDataLayerToAssetCommandlet"), &Z_Registration_Info_UClass_UDataLayerToAssetCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerToAssetCommandlet), 351809403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_2279490833(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionDataLayerToAssetCommandLet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
