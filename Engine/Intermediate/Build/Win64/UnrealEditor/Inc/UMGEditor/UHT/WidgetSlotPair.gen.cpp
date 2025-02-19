// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Utility/WidgetSlotPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSlotPair() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetSlotPair();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetSlotPair_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetSlotPair::StaticRegisterNativesUWidgetSlotPair()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSlotPair);
	UClass* Z_Construct_UClass_UWidgetSlotPair_NoRegister()
	{
		return UWidgetSlotPair::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetSlotPair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotPropertyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPropertyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotPropertyNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotPropertyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPropertyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotPropertyValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetSlotPair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSlotPair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/WidgetSlotPair.h" },
		{ "ModuleRelativePath", "Private/Utility/WidgetSlotPair.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_WidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utility/WidgetSlotPair.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetSlotPair, WidgetName), METADATA_PARAMS(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_WidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_WidgetName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames_Inner = { "SlotPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utility/WidgetSlotPair.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames = { "SlotPropertyNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetSlotPair, SlotPropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues_Inner = { "SlotPropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utility/WidgetSlotPair.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues = { "SlotPropertyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetSlotPair, SlotPropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSlotPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_WidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSlotPair_Statics::NewProp_SlotPropertyValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetSlotPair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSlotPair>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSlotPair_Statics::ClassParams = {
		&UWidgetSlotPair::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetSlotPair_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSlotPair_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetSlotPair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSlotPair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetSlotPair()
	{
		if (!Z_Registration_Info_UClass_UWidgetSlotPair.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSlotPair.OuterSingleton, Z_Construct_UClass_UWidgetSlotPair_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetSlotPair.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetSlotPair>()
	{
		return UWidgetSlotPair::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSlotPair);
	UWidgetSlotPair::~UWidgetSlotPair() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Utility_WidgetSlotPair_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Utility_WidgetSlotPair_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSlotPair, UWidgetSlotPair::StaticClass, TEXT("UWidgetSlotPair"), &Z_Registration_Info_UClass_UWidgetSlotPair, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSlotPair), 1822574739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Utility_WidgetSlotPair_h_872456268(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Utility_WidgetSlotPair_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Utility_WidgetSlotPair_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
