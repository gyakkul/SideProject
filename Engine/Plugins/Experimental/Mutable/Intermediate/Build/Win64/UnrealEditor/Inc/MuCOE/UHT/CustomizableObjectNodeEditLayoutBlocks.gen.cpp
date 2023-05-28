// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeEditLayoutBlocks.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeEditLayoutBlocks() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeEditLayoutBlocks::StaticRegisterNativesUCustomizableObjectNodeEditLayoutBlocks()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeEditLayoutBlocks);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_NoRegister()
	{
		return UCustomizableObjectNodeEditLayoutBlocks::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeEditMaterialBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeEditLayoutBlocks.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditLayoutBlocks.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds_Inner = { "BlockIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds_MetaData[] = {
		{ "Comment", "// Selected blocks\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEditLayoutBlocks.h" },
		{ "ToolTip", "Selected blocks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds = { "BlockIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEditLayoutBlocks, BlockIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::NewProp_BlockIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeEditLayoutBlocks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::ClassParams = {
		&UCustomizableObjectNodeEditLayoutBlocks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeEditLayoutBlocks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeEditLayoutBlocks.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeEditLayoutBlocks.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeEditLayoutBlocks>()
	{
		return UCustomizableObjectNodeEditLayoutBlocks::StaticClass();
	}
	UCustomizableObjectNodeEditLayoutBlocks::UCustomizableObjectNodeEditLayoutBlocks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeEditLayoutBlocks);
	UCustomizableObjectNodeEditLayoutBlocks::~UCustomizableObjectNodeEditLayoutBlocks() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditLayoutBlocks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditLayoutBlocks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeEditLayoutBlocks, UCustomizableObjectNodeEditLayoutBlocks::StaticClass, TEXT("UCustomizableObjectNodeEditLayoutBlocks"), &Z_Registration_Info_UClass_UCustomizableObjectNodeEditLayoutBlocks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeEditLayoutBlocks), 2875143936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditLayoutBlocks_h_1858913202(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditLayoutBlocks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEditLayoutBlocks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
