// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Annotations/SmartObjectSlotLinkAnnotation.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSlotLinkAnnotation() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotReference();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectSlotLinkAnnotation>() == std::is_polymorphic<FSmartObjectSlotAnnotation>(), "USTRUCT FSmartObjectSlotLinkAnnotation cannot be polymorphic unless super FSmartObjectSlotAnnotation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation;
class UScriptStruct* FSmartObjectSlotLinkAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotLinkAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotLinkAnnotation>()
{
	return FSmartObjectSlotLinkAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinkedSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Annotation to allow to find slots based on a Gameplay Tag.\n * This can be used to reuse same behavior on different slots, allowing to use a tag to identify a related slot. \n */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotLinkAnnotation.h" },
		{ "ToolTip", "Annotation to allow to find slots based on a Gameplay Tag.\nThis can be used to reuse same behavior on different slots, allowing to use a tag to identify a related slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotLinkAnnotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Tag to identify this slot. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotLinkAnnotation.h" },
		{ "ToolTip", "Tag to identify this slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotLinkAnnotation, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_Tag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_LinkedSlot_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The slot the annotation points at. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotLinkAnnotation.h" },
		{ "ToolTip", "The slot the annotation points at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_LinkedSlot = { "LinkedSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotLinkAnnotation, LinkedSlot), Z_Construct_UScriptStruct_FSmartObjectSlotReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_LinkedSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_LinkedSlot_MetaData)) }; // 1619878014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewProp_LinkedSlot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation,
		&NewStructOps,
		"SmartObjectSlotLinkAnnotation",
		sizeof(FSmartObjectSlotLinkAnnotation),
		alignof(FSmartObjectSlotLinkAnnotation),
		Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotLinkAnnotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotLinkAnnotation_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotLinkAnnotation::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotLinkAnnotation_Statics::NewStructOps, TEXT("SmartObjectSlotLinkAnnotation"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotLinkAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotLinkAnnotation), 3464824395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotLinkAnnotation_h_2008059429(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotLinkAnnotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotLinkAnnotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
