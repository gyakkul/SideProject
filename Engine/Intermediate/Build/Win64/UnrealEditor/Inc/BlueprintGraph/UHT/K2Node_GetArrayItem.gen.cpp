// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetArrayItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetArrayItem() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetArrayItem();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetArrayItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetArrayItem::StaticRegisterNativesUK2Node_GetArrayItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetArrayItem);
	UClass* Z_Construct_UClass_UK2Node_GetArrayItem_NoRegister()
	{
		return UK2Node_GetArrayItem::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetArrayItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReturnByRefDesired_MetaData[];
#endif
		static void NewProp_bReturnByRefDesired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnByRefDesired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetArrayItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams[] = {
		{ "Category", "Utilities|Array" },
		{ "IncludePath", "K2Node_GetArrayItem.h" },
		{ "Keywords", "array" },
		{ "ModuleRelativePath", "Classes/K2Node_GetArrayItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetArrayItem.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_SetBit(void* Obj)
	{
		((UK2Node_GetArrayItem*)Obj)->bReturnByRefDesired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired = { "bReturnByRefDesired", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_GetArrayItem), &Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetArrayItem_Statics::NewProp_bReturnByRefDesired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetArrayItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetArrayItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetArrayItem_Statics::ClassParams = {
		&UK2Node_GetArrayItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetArrayItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetArrayItem()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetArrayItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetArrayItem.OuterSingleton, Z_Construct_UClass_UK2Node_GetArrayItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetArrayItem.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetArrayItem>()
	{
		return UK2Node_GetArrayItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetArrayItem);
	UK2Node_GetArrayItem::~UK2Node_GetArrayItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetArrayItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetArrayItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetArrayItem, UK2Node_GetArrayItem::StaticClass, TEXT("UK2Node_GetArrayItem"), &Z_Registration_Info_UClass_UK2Node_GetArrayItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetArrayItem), 3981697145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetArrayItem_h_2859377321(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetArrayItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_GetArrayItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
