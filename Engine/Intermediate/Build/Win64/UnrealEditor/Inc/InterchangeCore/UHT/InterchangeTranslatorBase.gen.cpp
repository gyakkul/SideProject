// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTranslatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTranslatorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeResultsContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTranslatorType;
	static UEnum* EInterchangeTranslatorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeTranslatorType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeTranslatorType.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorType>()
	{
		return EInterchangeTranslatorType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enumerators[] = {
		{ "EInterchangeTranslatorType::Invalid", (int64)EInterchangeTranslatorType::Invalid },
		{ "EInterchangeTranslatorType::Assets", (int64)EInterchangeTranslatorType::Assets },
		{ "EInterchangeTranslatorType::Actors", (int64)EInterchangeTranslatorType::Actors },
		{ "EInterchangeTranslatorType::Scenes", (int64)EInterchangeTranslatorType::Scenes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enum_MetaDataParams[] = {
		{ "Actors.Name", "EInterchangeTranslatorType::Actors" },
		{ "Assets.Name", "EInterchangeTranslatorType::Assets" },
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "EInterchangeTranslatorType::Invalid" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "Scenes.Name", "EInterchangeTranslatorType::Scenes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangeTranslatorType",
		"EInterchangeTranslatorType",
		Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeTranslatorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType;
	static UEnum* EInterchangeTranslatorAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, (UObject*)Z_Construct_UPackage__Script_InterchangeCore(), TEXT("EInterchangeTranslatorAssetType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorAssetType>()
	{
		return EInterchangeTranslatorAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enumerators[] = {
		{ "EInterchangeTranslatorAssetType::None", (int64)EInterchangeTranslatorAssetType::None },
		{ "EInterchangeTranslatorAssetType::Textures", (int64)EInterchangeTranslatorAssetType::Textures },
		{ "EInterchangeTranslatorAssetType::Materials", (int64)EInterchangeTranslatorAssetType::Materials },
		{ "EInterchangeTranslatorAssetType::Meshes", (int64)EInterchangeTranslatorAssetType::Meshes },
		{ "EInterchangeTranslatorAssetType::Animations", (int64)EInterchangeTranslatorAssetType::Animations },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enum_MetaDataParams[] = {
		{ "Animations.Name", "EInterchangeTranslatorAssetType::Animations" },
		{ "BlueprintType", "true" },
		{ "Materials.Name", "EInterchangeTranslatorAssetType::Materials" },
		{ "Meshes.Name", "EInterchangeTranslatorAssetType::Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "None.Name", "EInterchangeTranslatorAssetType::None" },
		{ "Textures.Name", "EInterchangeTranslatorAssetType::Textures" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCore,
		nullptr,
		"EInterchangeTranslatorAssetType",
		"EInterchangeTranslatorAssetType",
		Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType.InnerSingleton;
	}
	void UInterchangeTranslatorBase::StaticRegisterNativesUInterchangeTranslatorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTranslatorBase);
	UClass* Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister()
	{
		return UInterchangeTranslatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Results;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTranslatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeTranslatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeTranslatorBase, Results), Z_Construct_UClass_UInterchangeResultsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeTranslatorBase.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeTranslatorBase, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeTranslatorBase_Statics::NewProp_SourceData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTranslatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTranslatorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTranslatorBase_Statics::ClassParams = {
		&UInterchangeTranslatorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTranslatorBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton, Z_Construct_UClass_UInterchangeTranslatorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTranslatorBase.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeTranslatorBase>()
	{
		return UInterchangeTranslatorBase::StaticClass();
	}
	UInterchangeTranslatorBase::UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTranslatorBase);
	UInterchangeTranslatorBase::~UInterchangeTranslatorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::EnumInfo[] = {
		{ EInterchangeTranslatorType_StaticEnum, TEXT("EInterchangeTranslatorType"), &Z_Registration_Info_UEnum_EInterchangeTranslatorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 680590226U) },
		{ EInterchangeTranslatorAssetType_StaticEnum, TEXT("EInterchangeTranslatorAssetType"), &Z_Registration_Info_UEnum_EInterchangeTranslatorAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3009238161U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTranslatorBase, UInterchangeTranslatorBase::StaticClass, TEXT("UInterchangeTranslatorBase"), &Z_Registration_Info_UClass_UInterchangeTranslatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTranslatorBase), 2856587376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_3999848707(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
