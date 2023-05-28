// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/ZoneGraphAnnotationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphAnnotationTypes() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase;
class UScriptStruct* FZoneGraphAnnotationEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase, (UObject*)Z_Construct_UPackage__Script_ZoneGraphAnnotations(), TEXT("ZoneGraphAnnotationEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.OuterSingleton;
}
template<> ZONEGRAPHANNOTATIONS_API UScriptStruct* StaticStruct<FZoneGraphAnnotationEventBase>()
{
	return FZoneGraphAnnotationEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base structs for all events for UZoneGraphAnnotationSubsystem. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationTypes.h" },
		{ "ToolTip", "Base structs for all events for UZoneGraphAnnotationSubsystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphAnnotationEventBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
		nullptr,
		&NewStructOps,
		"ZoneGraphAnnotationEventBase",
		sizeof(FZoneGraphAnnotationEventBase),
		alignof(FZoneGraphAnnotationEventBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTypes_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphAnnotationEventBase::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase_Statics::NewStructOps, TEXT("ZoneGraphAnnotationEventBase"), &Z_Registration_Info_UScriptStruct_ZoneGraphAnnotationEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphAnnotationEventBase), 2204029264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTypes_h_534171793(TEXT("/Script/ZoneGraphAnnotations"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
