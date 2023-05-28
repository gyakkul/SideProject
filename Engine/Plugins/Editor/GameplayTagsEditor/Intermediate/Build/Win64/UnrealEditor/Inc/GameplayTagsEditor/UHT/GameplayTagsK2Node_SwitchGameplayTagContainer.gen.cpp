// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagsK2Node_SwitchGameplayTagContainer.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsK2Node_SwitchGameplayTagContainer() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGSEDITOR_API UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer();
	GAMEPLAYTAGSEDITOR_API UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayTagsEditor();
// End Cross Module References
	void UGameplayTagsK2Node_SwitchGameplayTagContainer::StaticRegisterNativesUGameplayTagsK2Node_SwitchGameplayTagContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagsK2Node_SwitchGameplayTagContainer);
	UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_NoRegister()
	{
		return UGameplayTagsK2Node_SwitchGameplayTagContainer::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinContainers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinContainers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinContainers;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsK2Node_SwitchGameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_SwitchGameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers_Inner = { "PinContainers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_SwitchGameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers = { "PinContainers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsK2Node_SwitchGameplayTagContainer, PinContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers_MetaData)) }; // 3057219007
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = PinOptions)\n//bool UseInputsOnGraph;\n" },
		{ "ModuleRelativePath", "Classes/GameplayTagsK2Node_SwitchGameplayTagContainer.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = PinOptions)\nbool UseInputsOnGraph;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTagsK2Node_SwitchGameplayTagContainer, PinNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::NewProp_PinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsK2Node_SwitchGameplayTagContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::ClassParams = {
		&UGameplayTagsK2Node_SwitchGameplayTagContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer()
	{
		if (!Z_Registration_Info_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer.OuterSingleton, Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer.OuterSingleton;
	}
	template<> GAMEPLAYTAGSEDITOR_API UClass* StaticClass<UGameplayTagsK2Node_SwitchGameplayTagContainer>()
	{
		return UGameplayTagsK2Node_SwitchGameplayTagContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsK2Node_SwitchGameplayTagContainer);
	UGameplayTagsK2Node_SwitchGameplayTagContainer::~UGameplayTagsK2Node_SwitchGameplayTagContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTagContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer, UGameplayTagsK2Node_SwitchGameplayTagContainer::StaticClass, TEXT("UGameplayTagsK2Node_SwitchGameplayTagContainer"), &Z_Registration_Info_UClass_UGameplayTagsK2Node_SwitchGameplayTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagsK2Node_SwitchGameplayTagContainer), 3883254891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTagContainer_h_3708456149(TEXT("/Script/GameplayTagsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GameplayTagsEditor_Source_GameplayTagsEditor_Classes_GameplayTagsK2Node_SwitchGameplayTagContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
