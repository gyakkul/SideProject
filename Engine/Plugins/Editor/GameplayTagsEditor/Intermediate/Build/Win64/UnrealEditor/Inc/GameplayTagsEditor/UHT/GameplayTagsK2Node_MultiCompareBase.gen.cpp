// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsK2Node_MultiCompareBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsK2Node_MultiCompareBase() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	GAMEPLAYTAGSEDITOR_API UClass* Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase();
	GAMEPLAYTAGSEDITOR_API UClass* Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayTagsEditor();
// End Cross Module References
	void UGameplayTagsK2Node_MultiCompareBase::StaticRegisterNativesUGameplayTagsK2Node_MultiCompareBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsK2Node_MultiCompareBase);
	UClass* Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_NoRegister()
	{
		return UGameplayTagsK2Node_MultiCompareBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPins_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPins;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsK2Node_MultiCompareBase.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_MultiCompareBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_NumberOfPins_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_MultiCompareBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_NumberOfPins = { "NumberOfPins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsK2Node_MultiCompareBase, NumberOfPins), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_NumberOfPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_NumberOfPins_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_MultiCompareBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsK2Node_MultiCompareBase, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_NumberOfPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::NewProp_PinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsK2Node_MultiCompareBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::ClassParams = {
		&UGameplayTagsK2Node_MultiCompareBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsK2Node_MultiCompareBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsK2Node_MultiCompareBase.OuterSingleton, Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsK2Node_MultiCompareBase.OuterSingleton;
	}
	template<> GAMEPLAYTAGSEDITOR_API UClass* StaticClass<UGameplayTagsK2Node_MultiCompareBase>()
	{
		return UGameplayTagsK2Node_MultiCompareBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsK2Node_MultiCompareBase);
	UGameplayTagsK2Node_MultiCompareBase::~UGameplayTagsK2Node_MultiCompareBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_MultiCompareBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_MultiCompareBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsK2Node_MultiCompareBase, UGameplayTagsK2Node_MultiCompareBase::StaticClass, TEXT("UGameplayTagsK2Node_MultiCompareBase"), &Z_Registration_Info_UClass_UGameplayTagsK2Node_MultiCompareBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsK2Node_MultiCompareBase), 562668662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_MultiCompareBase_h_3953083333(TEXT("/Script/GameplayTagsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_MultiCompareBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_MultiCompareBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
