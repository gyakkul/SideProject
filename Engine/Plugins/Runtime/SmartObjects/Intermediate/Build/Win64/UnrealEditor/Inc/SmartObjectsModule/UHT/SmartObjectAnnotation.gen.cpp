// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectAnnotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectAnnotation() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectSlotAnnotation>() == std::is_polymorphic<FSmartObjectSlotDefinitionData>(), "USTRUCT FSmartObjectSlotAnnotation cannot be polymorphic unless super FSmartObjectSlotDefinitionData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation;
class UScriptStruct* FSmartObjectSlotAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotAnnotation>()
{
	return FSmartObjectSlotAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for Smart Object Slot annotations. Annotation is a specific type of slot definition data that has methods to visualize it.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectAnnotation.h" },
		{ "ToolTip", "Base class for Smart Object Slot annotations. Annotation is a specific type of slot definition data that has methods to visualize it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotAnnotation>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData,
		&NewStructOps,
		"SmartObjectSlotAnnotation",
		sizeof(FSmartObjectSlotAnnotation),
		alignof(FSmartObjectSlotAnnotation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectAnnotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectAnnotation_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotAnnotation::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation_Statics::NewStructOps, TEXT("SmartObjectSlotAnnotation"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotAnnotation), 193785492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectAnnotation_h_2789302359(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectAnnotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectAnnotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
