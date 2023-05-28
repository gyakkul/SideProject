// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Annotations/SmartObjectSlotEntryAnnotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSlotEntryAnnotation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectSlotEntryAnnotation>() == std::is_polymorphic<FSmartObjectSlotAnnotation>(), "USTRUCT FSmartObjectSlotEntryAnnotation cannot be polymorphic unless super FSmartObjectSlotAnnotation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation;
class UScriptStruct* FSmartObjectSlotEntryAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotEntryAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotEntryAnnotation>()
{
	return FSmartObjectSlotEntryAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Annotation to define a navigation entry for a Smart Object Slot.\n * This can be used to add multiple entry points to a slot, or to validate the entries against navigation data. \n */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntryAnnotation.h" },
		{ "ToolTip", "Annotation to define a navigation entry for a Smart Object Slot.\nThis can be used to add multiple entry points to a slot, or to validate the entries against navigation data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotEntryAnnotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Local space offset of the entry. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntryAnnotation.h" },
		{ "ToolTip", "Local space offset of the entry." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotEntryAnnotation, Offset), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Local space rotation of the entry. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntryAnnotation.h" },
		{ "ToolTip", "Local space rotation of the entry." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectSlotEntryAnnotation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation,
		&NewStructOps,
		"SmartObjectSlotEntryAnnotation",
		sizeof(FSmartObjectSlotEntryAnnotation),
		alignof(FSmartObjectSlotEntryAnnotation),
		Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntryAnnotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntryAnnotation_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotEntryAnnotation::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotEntryAnnotation_Statics::NewStructOps, TEXT("SmartObjectSlotEntryAnnotation"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotEntryAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotEntryAnnotation), 1326836992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntryAnnotation_h_230176565(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntryAnnotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntryAnnotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
