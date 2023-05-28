// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/ActorChangedTransformFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorChangedTransformFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorChangedTransformFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorChangedTransformFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorSelectorFilter();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformReturnType;
	static UEnum* ETransformReturnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformReturnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("ETransformReturnType"));
		}
		return Z_Registration_Info_UEnum_ETransformReturnType.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<ETransformReturnType::Type>()
	{
		return ETransformReturnType_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enumerators[] = {
		{ "ETransformReturnType::IsValidWhenTransformChanged", (int64)ETransformReturnType::IsValidWhenTransformChanged },
		{ "ETransformReturnType::IsValidWhenTransformStayedSame", (int64)ETransformReturnType::IsValidWhenTransformStayedSame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enum_MetaDataParams[] = {
		{ "IsValidWhenTransformChanged.Comment", "/* Return true if the snapshot and world actor have different transforms */" },
		{ "IsValidWhenTransformChanged.Name", "ETransformReturnType::IsValidWhenTransformChanged" },
		{ "IsValidWhenTransformChanged.ToolTip", "Return true if the snapshot and world actor have different transforms" },
		{ "IsValidWhenTransformStayedSame.Comment", "/* Returns true of the snapshot and world actor have the same transform */" },
		{ "IsValidWhenTransformStayedSame.Name", "ETransformReturnType::IsValidWhenTransformStayedSame" },
		{ "IsValidWhenTransformStayedSame.ToolTip", "Returns true of the snapshot and world actor have the same transform" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"ETransformReturnType",
		"ETransformReturnType::Type",
		Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType()
	{
		if (!Z_Registration_Info_UEnum_ETransformReturnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformReturnType.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformReturnType.InnerSingleton;
	}
	void UActorChangedTransformFilter::StaticRegisterNativesUActorChangedTransformFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorChangedTransformFilter);
	UClass* Z_Construct_UClass_UActorChangedTransformFilter_NoRegister()
	{
		return UActorChangedTransformFilter::StaticClass();
	}
	struct Z_Construct_UClass_UActorChangedTransformFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformCheckRule_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformCheckRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLocation_MetaData[];
#endif
		static void NewProp_bIgnoreLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRotation_MetaData[];
#endif
		static void NewProp_bIgnoreRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreScale_MetaData[];
#endif
		static void NewProp_bIgnoreScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorChangedTransformFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSelectorFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChangedTransformFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows an actor depending on whether the actors' transforms have changed.\n * Use case: You want detect whether an actor has changed its transform.\n */" },
		{ "CommonSnapshotFilter", "" },
		{ "IncludePath", "Builtin/ActorChangedTransformFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
		{ "ToolTip", "Allows an actor depending on whether the actors' transforms have changed.\nUse case: You want detect whether an actor has changed its transform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_TransformCheckRule_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Whether we allow actors that changed transform or that stayed at the same place. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
		{ "ToolTip", "Whether we allow actors that changed transform or that stayed at the same place." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_TransformCheckRule = { "TransformCheckRule", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorChangedTransformFilter, TransformCheckRule), Z_Construct_UEnum_LevelSnapshotFilters_ETransformReturnType, METADATA_PARAMS(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_TransformCheckRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_TransformCheckRule_MetaData)) }; // 3566085468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* If true, we do not compare the actors' locations. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
		{ "ToolTip", "If true, we do not compare the actors' locations." },
	};
#endif
	void Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation_SetBit(void* Obj)
	{
		((UActorChangedTransformFilter*)Obj)->bIgnoreLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation = { "bIgnoreLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorChangedTransformFilter), &Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* If true, we do not compare the actors' rotations. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
		{ "ToolTip", "If true, we do not compare the actors' rotations." },
	};
#endif
	void Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation_SetBit(void* Obj)
	{
		((UActorChangedTransformFilter*)Obj)->bIgnoreRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation = { "bIgnoreRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorChangedTransformFilter), &Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* If true, we do not compare the actors' scales. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorChangedTransformFilter.h" },
		{ "ToolTip", "If true, we do not compare the actors' scales." },
	};
#endif
	void Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale_SetBit(void* Obj)
	{
		((UActorChangedTransformFilter*)Obj)->bIgnoreScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale = { "bIgnoreScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UActorChangedTransformFilter), &Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorChangedTransformFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_TransformCheckRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChangedTransformFilter_Statics::NewProp_bIgnoreScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorChangedTransformFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorChangedTransformFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorChangedTransformFilter_Statics::ClassParams = {
		&UActorChangedTransformFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorChangedTransformFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorChangedTransformFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChangedTransformFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorChangedTransformFilter()
	{
		if (!Z_Registration_Info_UClass_UActorChangedTransformFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorChangedTransformFilter.OuterSingleton, Z_Construct_UClass_UActorChangedTransformFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorChangedTransformFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UActorChangedTransformFilter>()
	{
		return UActorChangedTransformFilter::StaticClass();
	}
	UActorChangedTransformFilter::UActorChangedTransformFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorChangedTransformFilter);
	UActorChangedTransformFilter::~UActorChangedTransformFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::EnumInfo[] = {
		{ ETransformReturnType_StaticEnum, TEXT("ETransformReturnType"), &Z_Registration_Info_UEnum_ETransformReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3566085468U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorChangedTransformFilter, UActorChangedTransformFilter::StaticClass, TEXT("UActorChangedTransformFilter"), &Z_Registration_Info_UClass_UActorChangedTransformFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorChangedTransformFilter), 2292877745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_330424873(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorChangedTransformFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
