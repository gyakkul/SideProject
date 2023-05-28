// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Overlays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlays() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
	UPackage* Z_Construct_UPackage__Script_Overlay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OverlayItem;
class UScriptStruct* FOverlayItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOverlayItem, (UObject*)Z_Construct_UPackage__Script_Overlay(), TEXT("OverlayItem"));
	}
	return Z_Registration_Info_UScriptStruct_OverlayItem.OuterSingleton;
}
template<> OVERLAY_API UScriptStruct* StaticStruct<FOverlayItem>()
{
	return FOverlayItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOverlayItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOverlayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOverlayItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "Comment", "/** When the overlay should be displayed */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be displayed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOverlayItem, StartTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Display Times" },
		{ "Comment", "/** When the overlay should be cleared */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "When the overlay should be cleared" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOverlayItem, EndTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Display Data" },
		{ "Comment", "/** Text that appears onscreen when the overlay is shown */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text that appears onscreen when the overlay is shown" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOverlayItem, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Display Data" },
		{ "Comment", "/** The position of the text on screen (Between 0.0 and 1.0) */" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "The position of the text on screen (Between 0.0 and 1.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOverlayItem, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOverlayItem_Statics::NewProp_Position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOverlayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
		nullptr,
		&NewStructOps,
		"OverlayItem",
		sizeof(FOverlayItem),
		alignof(FOverlayItem),
		Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOverlayItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem()
	{
		if (!Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton, Z_Construct_UScriptStruct_FOverlayItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OverlayItem.InnerSingleton;
	}
	void UOverlays::StaticRegisterNativesUOverlays()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlays);
	UClass* Z_Construct_UClass_UOverlays_NoRegister()
	{
		return UOverlays::StaticClass();
	}
	struct Z_Construct_UClass_UOverlays_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An interface class for creating overlay data assets\n */" },
		{ "IncludePath", "Overlays.h" },
		{ "ModuleRelativePath", "Public/Overlays.h" },
		{ "ToolTip", "An interface class for creating overlay data assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlays>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlays_Statics::ClassParams = {
		&UOverlays::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlays()
	{
		if (!Z_Registration_Info_UClass_UOverlays.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlays.OuterSingleton, Z_Construct_UClass_UOverlays_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlays.OuterSingleton;
	}
	template<> OVERLAY_API UClass* StaticClass<UOverlays>()
	{
		return UOverlays::StaticClass();
	}
	UOverlays::UOverlays(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlays);
	UOverlays::~UOverlays() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ScriptStructInfo[] = {
		{ FOverlayItem::StaticStruct, Z_Construct_UScriptStruct_FOverlayItem_Statics::NewStructOps, TEXT("OverlayItem"), &Z_Registration_Info_UScriptStruct_OverlayItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOverlayItem), 426197151U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlays, UOverlays::StaticClass, TEXT("UOverlays"), &Z_Registration_Info_UClass_UOverlays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlays), 727363232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_2779707205(TEXT("/Script/Overlay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_Overlays_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
