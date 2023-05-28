// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/PanelSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVisual();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UPanelSlot::StaticRegisterNativesUPanelSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPanelSlot);
	UClass* Z_Construct_UClass_UPanelSlot_NoRegister()
	{
		return UPanelSlot::StaticClass();
	}
	struct Z_Construct_UClass_UPanelSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVisual,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The base class for all Slots in UMG. */" },
		{ "IncludePath", "Components/PanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
		{ "ToolTip", "The base class for all Slots in UMG." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPanelSlot, Parent), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPanelSlot, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanelSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPanelSlot_Statics::ClassParams = {
		&UPanelSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPanelSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelSlot()
	{
		if (!Z_Registration_Info_UClass_UPanelSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPanelSlot.OuterSingleton, Z_Construct_UClass_UPanelSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPanelSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UPanelSlot>()
	{
		return UPanelSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelSlot);
	UPanelSlot::~UPanelSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPanelSlot, UPanelSlot::StaticClass, TEXT("UPanelSlot"), &Z_Registration_Info_UClass_UPanelSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPanelSlot), 3208287381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_660747867(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_PanelSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
