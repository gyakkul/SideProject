// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/BaseWidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWidgetBlueprint() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint();
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBaseWidgetBlueprint::StaticRegisterNativesUBaseWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseWidgetBlueprint);
	UClass* Z_Construct_UClass_UBaseWidgetBlueprint_NoRegister()
	{
		return UBaseWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UBaseWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/BaseWidgetBlueprint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "Comment", "/** A tree of the widget templates to be created */" },
		{ "ModuleRelativePath", "Public/BaseWidgetBlueprint.h" },
		{ "ToolTip", "A tree of the widget templates to be created" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseWidgetBlueprint, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWidgetBlueprint_Statics::NewProp_WidgetTree,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseWidgetBlueprint_Statics::ClassParams = {
		&UBaseWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::PropPointers), 0),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UBaseWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UBaseWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseWidgetBlueprint.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBaseWidgetBlueprint>()
	{
		return UBaseWidgetBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWidgetBlueprint);
	UBaseWidgetBlueprint::~UBaseWidgetBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseWidgetBlueprint, UBaseWidgetBlueprint::StaticClass, TEXT("UBaseWidgetBlueprint"), &Z_Registration_Info_UClass_UBaseWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseWidgetBlueprint), 1619279397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_882975029(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_BaseWidgetBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
