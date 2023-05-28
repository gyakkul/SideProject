// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonHardwareVisibilityBorder.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonHardwareVisibilityBorder() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonHardwareVisibilityBorder::StaticRegisterNativesUCommonHardwareVisibilityBorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonHardwareVisibilityBorder);
	UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder_NoRegister()
	{
		return UCommonHardwareVisibilityBorder::StaticClass();
	}
	struct Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityQuery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibleType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HiddenType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiddenType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A container that controls visibility based on Platform, Input \n */" },
		{ "IncludePath", "CommonHardwareVisibilityBorder.h" },
		{ "ModuleRelativePath", "Public/CommonHardwareVisibilityBorder.h" },
		{ "ToolTip", "A container that controls visibility based on Platform, Input" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibilityQuery_MetaData[] = {
		{ "Categories", "Input,Platform.Trait" },
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonHardwareVisibilityBorder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibilityQuery = { "VisibilityQuery", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonHardwareVisibilityBorder, VisibilityQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibilityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibilityQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonHardwareVisibilityBorder.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType = { "VisibleType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonHardwareVisibilityBorder, VisibleType), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType_MetaData)) }; // 2244982430
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonHardwareVisibilityBorder.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType = { "HiddenType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonHardwareVisibilityBorder, HiddenType), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType_MetaData)) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibilityQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_VisibleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::NewProp_HiddenType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonHardwareVisibilityBorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::ClassParams = {
		&UCommonHardwareVisibilityBorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonHardwareVisibilityBorder()
	{
		if (!Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.OuterSingleton, Z_Construct_UClass_UCommonHardwareVisibilityBorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonHardwareVisibilityBorder>()
	{
		return UCommonHardwareVisibilityBorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonHardwareVisibilityBorder);
	UCommonHardwareVisibilityBorder::~UCommonHardwareVisibilityBorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHardwareVisibilityBorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHardwareVisibilityBorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonHardwareVisibilityBorder, UCommonHardwareVisibilityBorder::StaticClass, TEXT("UCommonHardwareVisibilityBorder"), &Z_Registration_Info_UClass_UCommonHardwareVisibilityBorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonHardwareVisibilityBorder), 2092290036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHardwareVisibilityBorder_h_1859763469(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHardwareVisibilityBorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonHardwareVisibilityBorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
