// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFSlotBase.h"
#include "Layout/Margin.h"
#include "Types/UIFWidgetId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFSlotBase() {}
// Cross Module References
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkSlotBase>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FUIFrameworkSlotBase cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase;
class UScriptStruct* FUIFrameworkSlotBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkSlotBase, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkSlotBase"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkSlotBase>()
{
	return FUIFrameworkSlotBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPreviousWidgetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPreviousWidgetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkSlotBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_Widget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000080000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSlotBase, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_WidgetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_WidgetId = { "WidgetId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSlotBase, WidgetId), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_WidgetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_WidgetId_MetaData)) }; // 4193507828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_LocalPreviousWidgetId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The widget that was previously added on the local UMG Widget.\n\x09 * The server may have changed it but the \"application\" of that modification may be applied on the next frame by the PlayerComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
		{ "ToolTip", "The widget that was previously added on the local UMG Widget.\nThe server may have changed it but the \"application\" of that modification may be applied on the next frame by the PlayerComponent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_LocalPreviousWidgetId = { "LocalPreviousWidgetId", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSlotBase, LocalPreviousWidgetId), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_LocalPreviousWidgetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_LocalPreviousWidgetId_MetaData)) }; // 4193507828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_WidgetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewProp_LocalPreviousWidgetId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"UIFrameworkSlotBase",
		sizeof(FUIFrameworkSlotBase),
		alignof(FUIFrameworkSlotBase),
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkSimpleSlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkSimpleSlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot;
class UScriptStruct* FUIFrameworkSimpleSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkSimpleSlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkSimpleSlot>()
{
	return FUIFrameworkSimpleSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkSimpleSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSimpleSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSimpleSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Types/UIFSlotBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSimpleSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewProp_VerticalAlignment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkSimpleSlot",
		sizeof(FUIFrameworkSimpleSlot),
		alignof(FUIFrameworkSimpleSlot),
		Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFSlotBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFSlotBase_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkSlotBase::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkSlotBase_Statics::NewStructOps, TEXT("UIFrameworkSlotBase"), &Z_Registration_Info_UScriptStruct_UIFrameworkSlotBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkSlotBase), 7601163U) },
		{ FUIFrameworkSimpleSlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkSimpleSlot_Statics::NewStructOps, TEXT("UIFrameworkSimpleSlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkSimpleSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkSimpleSlot), 3252238948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFSlotBase_h_2667826991(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFSlotBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFSlotBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
