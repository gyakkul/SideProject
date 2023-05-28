// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockRootMotionSourceObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockRootMotionSourceObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_Curve();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_Curve_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_Montage();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_Montage_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_MoveToLocation();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSource_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSourceClassMap();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockRootMotionSourceClassMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	void UMockRootMotionSource::StaticRegisterNativesUMockRootMotionSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionSource);
	UClass* Z_Construct_UClass_UMockRootMotionSource_NoRegister()
	{
		return UMockRootMotionSource::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockRootMotionSourceObject.h" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionSource_Statics::ClassParams = {
		&UMockRootMotionSource::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionSource()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionSource.OuterSingleton, Z_Construct_UClass_UMockRootMotionSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionSource.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionSource>()
	{
		return UMockRootMotionSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionSource);
	void UMockRootMotionSourceClassMap::StaticRegisterNativesUMockRootMotionSourceClassMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionSourceClassMap);
	UClass* Z_Construct_UClass_UMockRootMotionSourceClassMap_NoRegister()
	{
		return UMockRootMotionSourceClassMap::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SourceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MockRootMotionSourceObject.h" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList_Inner = { "SourceList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMockRootMotionSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList_MetaData[] = {
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList = { "SourceList", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSourceClassMap, SourceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::NewProp_SourceList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionSourceClassMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::ClassParams = {
		&UMockRootMotionSourceClassMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionSourceClassMap()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionSourceClassMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionSourceClassMap.OuterSingleton, Z_Construct_UClass_UMockRootMotionSourceClassMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionSourceClassMap.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionSourceClassMap>()
	{
		return UMockRootMotionSourceClassMap::StaticClass();
	}
	UMockRootMotionSourceClassMap::UMockRootMotionSourceClassMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionSourceClassMap);
	UMockRootMotionSourceClassMap::~UMockRootMotionSourceClassMap() {}
	void UMockRootMotionSource_Montage::StaticRegisterNativesUMockRootMotionSource_Montage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionSource_Montage);
	UClass* Z_Construct_UClass_UMockRootMotionSource_Montage_NoRegister()
	{
		return UMockRootMotionSource_Montage::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionSource_Montage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMockRootMotionSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ---------------------------------------------------------------\n//\n// ---------------------------------------------------------------\n" },
		{ "IncludePath", "MockRootMotionSourceObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Montage, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Montage, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_TranslationScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_TranslationScale = { "TranslationScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Montage, TranslationScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_TranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_TranslationScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::NewProp_TranslationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionSource_Montage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::ClassParams = {
		&UMockRootMotionSource_Montage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionSource_Montage()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionSource_Montage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionSource_Montage.OuterSingleton, Z_Construct_UClass_UMockRootMotionSource_Montage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionSource_Montage.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionSource_Montage>()
	{
		return UMockRootMotionSource_Montage::StaticClass();
	}
	UMockRootMotionSource_Montage::UMockRootMotionSource_Montage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionSource_Montage);
	UMockRootMotionSource_Montage::~UMockRootMotionSource_Montage() {}
	void UMockRootMotionSource_Curve::StaticRegisterNativesUMockRootMotionSource_Curve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionSource_Curve);
	UClass* Z_Construct_UClass_UMockRootMotionSource_Curve_NoRegister()
	{
		return UMockRootMotionSource_Curve::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionSource_Curve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMockRootMotionSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MockRootMotionSourceObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Curve, Curve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Curve, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_TranslationScale_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_TranslationScale = { "TranslationScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_Curve, TranslationScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_TranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_TranslationScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::NewProp_TranslationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionSource_Curve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::ClassParams = {
		&UMockRootMotionSource_Curve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionSource_Curve()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionSource_Curve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionSource_Curve.OuterSingleton, Z_Construct_UClass_UMockRootMotionSource_Curve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionSource_Curve.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionSource_Curve>()
	{
		return UMockRootMotionSource_Curve::StaticClass();
	}
	UMockRootMotionSource_Curve::UMockRootMotionSource_Curve() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionSource_Curve);
	UMockRootMotionSource_Curve::~UMockRootMotionSource_Curve() {}
	DEFINE_FUNCTION(UMockRootMotionSource_MoveToLocation::execSetDestination)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestination(Z_Param_Out_InDestination);
		P_NATIVE_END;
	}
	void UMockRootMotionSource_MoveToLocation::StaticRegisterNativesUMockRootMotionSource_MoveToLocation()
	{
		UClass* Class = UMockRootMotionSource_MoveToLocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDestination", &UMockRootMotionSource_MoveToLocation::execSetDestination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics
	{
		struct MockRootMotionSource_MoveToLocation_eventSetDestination_Parms
		{
			FVector InDestination;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDestination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDestination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::NewProp_InDestination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::NewProp_InDestination = { "InDestination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockRootMotionSource_MoveToLocation_eventSetDestination_Parms, InDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::NewProp_InDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::NewProp_InDestination_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::NewProp_InDestination,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Root Motion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockRootMotionSource_MoveToLocation, nullptr, "SetDestination", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::MockRootMotionSource_MoveToLocation_eventSetDestination_Parms), Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockRootMotionSource_MoveToLocation);
	UClass* Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_NoRegister()
	{
		return UMockRootMotionSource_MoveToLocation::StaticClass();
	}
	struct Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapToTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapToTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMockRootMotionSource,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockRootMotionSource_MoveToLocation_SetDestination, "SetDestination" }, // 3352606386
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MockRootMotionSourceObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_MoveToLocation, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_MoveToLocation, Velocity), METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_SnapToTolerance_MetaData[] = {
		{ "Category", "RootMotion" },
		{ "ModuleRelativePath", "Public/MockRootMotionSourceObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_SnapToTolerance = { "SnapToTolerance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockRootMotionSource_MoveToLocation, SnapToTolerance), METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_SnapToTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_SnapToTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::NewProp_SnapToTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockRootMotionSource_MoveToLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::ClassParams = {
		&UMockRootMotionSource_MoveToLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockRootMotionSource_MoveToLocation()
	{
		if (!Z_Registration_Info_UClass_UMockRootMotionSource_MoveToLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockRootMotionSource_MoveToLocation.OuterSingleton, Z_Construct_UClass_UMockRootMotionSource_MoveToLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockRootMotionSource_MoveToLocation.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockRootMotionSource_MoveToLocation>()
	{
		return UMockRootMotionSource_MoveToLocation::StaticClass();
	}
	UMockRootMotionSource_MoveToLocation::UMockRootMotionSource_MoveToLocation() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockRootMotionSource_MoveToLocation);
	UMockRootMotionSource_MoveToLocation::~UMockRootMotionSource_MoveToLocation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionSourceObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionSourceObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockRootMotionSource, UMockRootMotionSource::StaticClass, TEXT("UMockRootMotionSource"), &Z_Registration_Info_UClass_UMockRootMotionSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionSource), 120506905U) },
		{ Z_Construct_UClass_UMockRootMotionSourceClassMap, UMockRootMotionSourceClassMap::StaticClass, TEXT("UMockRootMotionSourceClassMap"), &Z_Registration_Info_UClass_UMockRootMotionSourceClassMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionSourceClassMap), 3586901490U) },
		{ Z_Construct_UClass_UMockRootMotionSource_Montage, UMockRootMotionSource_Montage::StaticClass, TEXT("UMockRootMotionSource_Montage"), &Z_Registration_Info_UClass_UMockRootMotionSource_Montage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionSource_Montage), 783875874U) },
		{ Z_Construct_UClass_UMockRootMotionSource_Curve, UMockRootMotionSource_Curve::StaticClass, TEXT("UMockRootMotionSource_Curve"), &Z_Registration_Info_UClass_UMockRootMotionSource_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionSource_Curve), 4087643738U) },
		{ Z_Construct_UClass_UMockRootMotionSource_MoveToLocation, UMockRootMotionSource_MoveToLocation::StaticClass, TEXT("UMockRootMotionSource_MoveToLocation"), &Z_Registration_Info_UClass_UMockRootMotionSource_MoveToLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockRootMotionSource_MoveToLocation), 3042409569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionSourceObject_h_1594299830(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionSourceObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockRootMotionSourceObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
