// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVisualAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVisualAttachment() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisualAttachment();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisualAttachment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_USizeBox();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonVisualAttachment::StaticRegisterNativesUCommonVisualAttachment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonVisualAttachment);
	UClass* Z_Construct_UClass_UCommonVisualAttachment_NoRegister()
	{
		return UCommonVisualAttachment::StaticClass();
	}
	struct Z_Construct_UClass_UCommonVisualAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAnchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonVisualAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USizeBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisualAttachment_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * Adds a widget as a zero-size attachment to another. Think icons to the left of labels, without changing the computed size of the label.\n */" },
		{ "IncludePath", "CommonVisualAttachment.h" },
		{ "ModuleRelativePath", "Public/CommonVisualAttachment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds a widget as a zero-size attachment to another. Think icons to the left of labels, without changing the computed size of the label." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisualAttachment_Statics::NewProp_ContentAnchor_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/CommonVisualAttachment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonVisualAttachment_Statics::NewProp_ContentAnchor = { "ContentAnchor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVisualAttachment, ContentAnchor), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCommonVisualAttachment_Statics::NewProp_ContentAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisualAttachment_Statics::NewProp_ContentAnchor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonVisualAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVisualAttachment_Statics::NewProp_ContentAnchor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonVisualAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonVisualAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonVisualAttachment_Statics::ClassParams = {
		&UCommonVisualAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonVisualAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisualAttachment_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonVisualAttachment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisualAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonVisualAttachment()
	{
		if (!Z_Registration_Info_UClass_UCommonVisualAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonVisualAttachment.OuterSingleton, Z_Construct_UClass_UCommonVisualAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonVisualAttachment.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonVisualAttachment>()
	{
		return UCommonVisualAttachment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonVisualAttachment);
	UCommonVisualAttachment::~UCommonVisualAttachment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonVisualAttachment, UCommonVisualAttachment::StaticClass, TEXT("UCommonVisualAttachment"), &Z_Registration_Info_UClass_UCommonVisualAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonVisualAttachment), 1739331526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_31912621(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisualAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
