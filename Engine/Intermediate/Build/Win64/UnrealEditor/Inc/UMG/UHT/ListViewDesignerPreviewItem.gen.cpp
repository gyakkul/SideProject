// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Blueprint/ListViewDesignerPreviewItem.h"
#include "Components/ListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListViewDesignerPreviewItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem();
	UMG_API UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UListViewDesignerPreviewItem::StaticRegisterNativesUListViewDesignerPreviewItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListViewDesignerPreviewItem);
	UClass* Z_Construct_UClass_UListViewDesignerPreviewItem_NoRegister()
	{
		return UListViewDesignerPreviewItem::StaticClass();
	}
	struct Z_Construct_UClass_UListViewDesignerPreviewItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Empty dummy UObject used as the table view item during design time\n// Allows rough design-time previewing of how list contents will lay out\n" },
		{ "IncludePath", "Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ModuleRelativePath", "Private/Blueprint/ListViewDesignerPreviewItem.h" },
		{ "ToolTip", "Empty dummy UObject used as the table view item during design time\nAllows rough design-time previewing of how list contents will lay out" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UListViewDesignerPreviewItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams = {
		&UListViewDesignerPreviewItem::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListViewDesignerPreviewItem()
	{
		if (!Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton, Z_Construct_UClass_UListViewDesignerPreviewItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UListViewDesignerPreviewItem.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UListViewDesignerPreviewItem>()
	{
		return UListViewDesignerPreviewItem::StaticClass();
	}
	UListViewDesignerPreviewItem::UListViewDesignerPreviewItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListViewDesignerPreviewItem);
	UListViewDesignerPreviewItem::~UListViewDesignerPreviewItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UListViewDesignerPreviewItem, UListViewDesignerPreviewItem::StaticClass, TEXT("UListViewDesignerPreviewItem"), &Z_Registration_Info_UClass_UListViewDesignerPreviewItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListViewDesignerPreviewItem), 1509822092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_3341492900(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Blueprint_ListViewDesignerPreviewItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
